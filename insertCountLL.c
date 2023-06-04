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

void insertFirst(PPNODE first, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)); // allocate memory
    newn->data = iNo;
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

void insertLast(PPNODE first, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *first;
    newn->data = no;
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
    }
}
int count(PNODE first)
{
    int iCnt = 0;
    while (first != NULL)
    {
        iCnt++;
        first = first->next;
    }
    return iCnt;
}
void deleteFirst(PPNODE first)
{
    PNODE temp = (*first);
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
        *first = (*first)->next;
        free(temp);
    }
}
void deleteLast(PPNODE first)
{
    PNODE temp = *first;
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
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}
void insertAtPos(PPNODE first, int iPos, int iNo)
{
    int nodeCnt = 0;
    nodeCnt = count(*first);

    if ((iPos < 1) || (iPos > nodeCnt + 1))
    {
        printf("Invalid Position:\n");
        return;
    }

    if (iPos == 1)
    {
        insertFirst(first, iNo);
    }
    else if (iPos == nodeCnt + 1)
    {
        insertLast(first, iNo);
    }
    else
    {
        PNODE newn = (PNODE)malloc(sizeof(NODE));
        newn->data = iNo;
        newn->next = NULL;

        PNODE temp = *first;
        int iCnt = 0;
        for (iCnt = 1; iCnt < iPos; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}
void deleteAtPos(PPNODE first, int iPos)
{
    int nodeCnt = 0, iCnt = 0;
    PNODE temp = NULL;
    PNODE temp2 = NULL;
    nodeCnt = count(*first);
    if ((iPos < 1) || (iPos > nodeCnt))
    {
        printf("Invalid position:\n");
        return;
    }

    if (iPos == 1)
    {
        deleteFirst(first);
    }
    else if (iPos == nodeCnt + 1)
    {
        deleteLast(first);
    }
    else
    {
        temp = *first;
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        // temp->n = temp->next->next;
        temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);
    }
}
void display(PNODE first)
{
    printf("Elements in linked list are..,\n");

    while (first != NULL)
    {
        printf("|%d|->", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE Head = NULL;

    insertFirst(&Head, 14);
    insertFirst(&Head, 76);
    insertFirst(&Head, 89);
    insertFirst(&Head, 64);
    insertFirst(&Head, 66);
    insertFirst(&Head, 59);
    display(Head);
    printf("Number of nodes:%d\n", count(Head));

    insertLast(&Head, 99);
    display(Head);
    printf("Number of nodes:%d\n", count(Head));

    // deleteFirst(&Head);
    // display(Head);
    // printf("Number of nodes:%d\n", count(Head));

    // deleteLast(&Head);
    // display(Head);
    // printf("Number of nodes:%d\n", count(Head));

    insertAtPos(&Head, 3, 56);
    display(Head);
    printf("Number of nodes:%d\n", count(Head));

    deleteAtPos(&Head, 3);
    display(Head);
    printf("Number of nodes:%d\n", count(Head));

    return 0;
}