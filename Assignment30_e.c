/*write a program which displays largest digit of each elememnt from
singly linked list*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void insertLast(PPNODE first, int iData)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iData;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        PNODE temp = *first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->next = NULL;
    }
}
void Display(PNODE first)
{
    if (first == NULL)
    {
        printf("Linked list is empty:\n");
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

void displayLargestElement(PNODE first)
{
    int iTemp = 0, iRem = 0, iMax = 0;
    if (first == NULL)
    {
        printf("Linked list is empty:\n");
    }
    else
    {
        while (first != NULL)
        {
            iTemp = first->data;
            iMax = iTemp % 10;
            while (iTemp != 0)
            {
                iRem = iTemp % 10;
                if (iRem > iMax)
                {
                    iMax = iRem;
                }
                iTemp = iTemp / 10;
            }
            printf("%d ", iMax);
            first = first->next;
        }
    }
}
int main()
{
    PNODE head = NULL;
    insertLast(&head, 23);
    insertLast(&head, 12);
    insertLast(&head, 98);

    Display(head);

    displayLargestElement(head);
    return 0;
}