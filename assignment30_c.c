/*write a program which display prodcuct of each element from singly
linked list*/
#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void insertAtLast(PPNODE first, int idata)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *first;
    newn->data = idata;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->next = NULL;
    }
}
void display(PNODE first)
{
    if (first == NULL)
    {
        printf("No nodes in linked list:\n");
    }
    else
    {
        while (first != NULL)
        {
            printf("|%d|->", first->data);
            first = first->next;
        }
        printf("NULL\n");
    }
}
void displayProduct(PNODE first)
{
    int iMul = 1, temp = 0, iRem = 0;
    if (first == NULL)
    {
        printf("no any elements here:\n");
    }
    else
    {
        while (first != NULL)
        {
            iMul = 1;
            temp = first->data;
            while (temp != 0)
            {
                iRem = temp % 10;
                if (iRem != 0)
                {
                    iMul = iMul * iRem;
                }
                temp = temp / 10;
            }
            printf("%d ", iMul);
            first = first->next;
        }
    }
}
int main()
{
    PNODE head = NULL;
    insertAtLast(&head, 89);
    insertAtLast(&head, 90);
    insertAtLast(&head, 99);
    display(head);
    displayProduct(head);
    return 0;
}