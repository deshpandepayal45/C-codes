/*write a program which display the product of each elemnt from linked list*/

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

void insertFirst(PPNODE first, int iData)
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
        newn->next = *first;
        *first = newn;
    }
}

void Display(PNODE first)
{
    if (first == NULL)
    {
        printf("There are no any elemnts here:\n");
    }
    else
    {
        while (first != NULL)
        {
            printf("|%d|->", first->data);
            first = first->next;
        }
    }
}
int Count(PNODE first)
{
    int iCnt = 0;
    if (first == NULL)
    {
        printf("There are no any elemnts here:\n");
    }
    else
    {
        while (first != NULL)
        {
            iCnt++;
            first = first->next;
        }
    }
    return iCnt;
}
void insertLast(PPNODE first, int iData)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iData;
    newn->next = NULL;
    PNODE temp = *first;
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
        temp->next->next = NULL;
    }
}
void insertAtPos(PPNODE first, int iPos, int iData)
{
    int nodeCnt = 0;
    PNODE temp = *first;
    PNODE newn = NULL;

    nodeCnt = Count(*first);

    if (nodeCnt == 1)
    {
        insertFirst(first, iData);
    }
    else if (iPos == nodeCnt + 1)
    {
        insertLast(first, iData);
    }
    else
    {
        int iCnt = 1;
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = iData;
        newn->next = NULL;

        while (iCnt < iPos - 1)
        {
            temp = temp->next;
            iCnt++;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void deleteFirst(PPNODE first)
{
    if (*first == NULL)
    {
        return;
    }
    if ((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        PNODE temp = *first;
        *first = (*first)->next;
        free(temp);
    }
}

void deleteLast(PPNODE first)
{
    if (*first == NULL)
    {
        return;
    }
    else if ((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        PNODE temp = *first;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void deleteAtPos(PPNODE first, int iPos)
{
    int nodeCnt = 0;
    nodeCnt = Count(*first);
    if (*first == NULL)
    {
        return;
    }
    if (nodeCnt == 1)
    {
        deleteFirst(first);
    }
    else if (iPos == nodeCnt)
    {
        deleteLast(first);
    }
    else
    {
        int iCnt = 1;
        PNODE temp1 = *first;
        PNODE temp2 = NULL;
        while (iCnt < iPos - 1)
        {
            temp1 = temp1->next;
            iCnt++;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
        temp2 = NULL;
    }
}
int main()
{
    PNODE head = NULL;
    insertFirst(&head, 45);
    // Display(head);
    insertLast(&head, 67);
    insertFirst(&head, 34);
    insertFirst(&head, 34);
    insertFirst(&head, 34);
    insertAtPos(&head, 2, 456);

    Display(head);
    printf("\n");
    deleteFirst(&head);
    deleteLast(&head);
    deleteAtPos(&head, 3);
    Display(head);

    return 0;
}