#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *S;
}

create(struct stack *st)
{
    printf("Enter the size of array:\n");
    scanf("%d", &st->size);
    st->top = -1;
    st->S = (int *)malloc(st->size * sizeof(int));
}
void Push(struct stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        printf("Stack overflow:\n");
    }
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}
int pop(struct stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        printf("Stack underflow :\n");
    }
    else
    {
        x = st->S[st->top--];
    }
    return x;
}
void display(struct stack st)
{
    if (st.top == -1)
    {
        printf("Stack is empty:\n");
    }
    else if (st.top == st.size - 1)
    {
        printf("Stack overflow:\n");
    }
    else
    {
        for (int i = st.top; i >= 0; i--)
        {
            printf("%d ", st.S[i]);
        }
        printf("\n");
    }
}

bool isEmpty(struct stack st)
{
    if (st.top == -1)
    {
        return true;
    }
    return false;
}

bool isFull(struct stack st)
{
    if ((st.top) == st.size - 1)
    {
        return true;
    }
    return false;
}
int main()
{
    struct stack st;
    create(&st);
    Push(&st, 23);
    Push(&st, 123);
    Push(&st, 323);
    Push(&st, 243);
    Push(&st, 263);

    display(st);

    bool ans = false;
    ans = isEmpty(st);
    if (ans == true)
    {
        printf("Stack is empty:\n");
    }
    bool bns = isFull(st);
    if (bns == true)
    {
        printf("Stack overflow\n");
    }
    return 0;
}