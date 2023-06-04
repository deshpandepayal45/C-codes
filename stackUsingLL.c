#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    struct stack *next;
};
typedef struct stack Stack;
typedef struct stack *PStack;
typedef struct stack **PPStack;
void insertFirst(PPStack stk, int data)
{
    PStack newn = (PStack)malloc(sizeof(Stack));
    newn->top = data;
    if (*stk == NULL)
    {
        *stk = newn;
    }
    else
    {
        newn->next = *stk;
        *stk = newn;
    }
}

int deleteFirst(PPStack stk)
{
    int x = -1;
    if (*stk == NULL)
    {
        printf("Stack underflow:\n");
    }
    else
    {
        x = (*stk)->top;
        *stk = (*stk)->next;
    }
    return x;
}

void Display(PStack stk)
{
    if (stk == NULL)
    {
        printf("Stack underflow:\n");
        return;
    }
    else
    {
        while (stk != NULL)
        {
            printf("%d ", stk->top);
            stk = stk->next;
        }
        printf("NULL\n");
    }
}

void isEmpty(PStack stk)
{
    if (stk == NULL)
    {
        printf("Stack underflow.\n");
    }
}
int main()
{
    
    PStack st = NULL;
    insertFirst(&st, 67);
    insertFirst(&st, 637);
    insertFirst(&st, 617);
    insertFirst(&st, 647);
    insertFirst(&st, 6745);

    Display(st);

    deleteFirst(&st);
    deleteFirst(&st);
    deleteFirst(&st);
    deleteFirst(&st);
    deleteFirst(&st);

    Display(st);
    isEmpty(st);
    return 0;
}