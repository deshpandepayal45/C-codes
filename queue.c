#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

bool isQueueEmpty(PNODE First)
{
    if (First == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Enqueue(PPNODE First, int data)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = data;
    newn->next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        PNODE temp = *First;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}
void Dequeue(PPNODE First)
{
    if (*First == NULL)
    {
        printf("Queue is empty:\n");
        return;
    }
    else
    {
        PNODE temp = *First;
        *First = (*First)->next;
        free(temp);
    }
}
void Display(PNODE First)
{
    if (First == NULL)
    {
        printf("Queue is empty:\n");
    }
    else
    {
        while (First != NULL)
        {
            printf("%d ", First->data);
            First = First->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    PNODE Head = NULL;
    bool bRet = false;
    bRet = isQueueEmpty(Head);
    if (bRet == true)
    {
        printf("Queue is empty:\n");
    }
    else
    {
        printf("Queue is not empty:\n");
    }
    Enqueue(&Head, 56);
    Enqueue(&Head, 56);
    Enqueue(&Head, 56);
    Display(Head);
    Dequeue(&Head);
    Display(Head);
    return 0;
}