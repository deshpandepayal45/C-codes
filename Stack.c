#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
bool isStackEmpty(struct node *First)
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
void Push(struct node **First, int data)
{
    struct node *newn = (struct node *)malloc(sizeof(struct node));
    newn->data = data;
    newn->next = NULL;
    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}
void Pop(struct node **First)
{
    if (First == NULL)
    {
        printf("Stack is empty:\n");
        return;
    }
    else
    {
        struct node *temp = *First;
        *First = (*First)->next;
        free(temp);
    }
}
void display(struct node *First)
{
    if (First == NULL)
    {
        printf("stack is empty\n");
        return;
    }
    while (First != NULL)
    {
        printf("%d ", First->data);
        First = First->next;
    }
    printf("NULL\n");
}
int main()
{
    struct node *Head = NULL;
    bool bRet = false;
    bRet = isStackEmpty(Head);
    if (bRet == true)
    {
        printf("stack is empty:\n");
    }
    else
    {
        printf("stack have elements:\n");
    }
    Push(&Head, 34);
    Push(&Head, 54);
    Push(&Head, 35);
    Push(&Head, 24);
    display(Head);

    Pop(&Head);
    display(Head);
    return 0;
}
