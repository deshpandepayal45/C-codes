/*write a program which displays smallest digit from each element in
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

void display(PNODE first)
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

void displaySmallestDigit(PNODE first)
{
    int temp = 0, iRem = 0, iMin = 0;
    if (first == NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        while (first != NULL)
        {
            temp = first->data;
            iMin = temp % 10;
            while (temp != 0)
            {
                iRem = temp % 10;

                if (iRem < iMin)
                {
                    iMin = iRem;
                }
                temp = temp / 10;
            }
            printf("%d ", iMin);
            first = first->next;
        }
    }
}
int main()
{
    PNODE head = NULL;
    insertLast(&head, 45);
    insertLast(&head, 23);
    insertLast(&head, 12);
    insertLast(&head, 50);

    display(head);

    displaySmallestDigit(head);
    return 0;
}