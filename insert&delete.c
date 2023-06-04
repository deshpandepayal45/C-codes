#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;
int count(PNODE first)
{
    int count = 0;
    while (first != NULL)
    {
        count++;
        first = first->next;
    }
    return count;
}
void insertFirst(PPNODE first, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;
    }
}
void insertLast(PPNODE first, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *first;
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

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
        newn->prev = temp;
    }
}
void deleteFirst(PPNODE first)
{
    // PNODE temp = *first;
    if (*first == NULL)
    {
        return;
    }
    if (count(*first) == 1)
    {
        free(*first);
        *first == NULL;
    }
    else
    {
        *first = (*first)->next;
        // free(temp);
        free((*first)->prev);
        // temp = NULL;
        (*first)->prev = NULL;
    }
}
void deleteLast(PPNODE first)
{
    PNODE temp = *first;
    if (*first == NULL)
    {
        return;
    }
    if (count(*first) == 1)
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
void insertAtPos(PPNODE first, int iNo, int iPos)
{
    int nodeCnt = 0, iCnt = 1;
    PNODE temp = *first;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    nodeCnt = count(*first);
    if (iPos < 0 || iPos > nodeCnt + 1)
    {
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
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        newn->next->prev = newn;
    }
}

void deleteAtPos(PPNODE first, int iPos)
{
    int nodeCnt = 0, iCnt = 0;
    PNODE temp1 = *first;
    PNODE temp2 = NULL;
    nodeCnt = count(*first);

    if (iPos < 1 || iPos > nodeCnt)
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
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        temp2->next->prev = temp1;
        free(temp2);
    }
}
void display(PNODE first)
{
    printf("NULL ");
    while (first != NULL)
    {
        printf("<=|%d|=>", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;
    insertFirst(&head, 34);
    insertFirst(&head, 634);
    insertFirst(&head, 44);
    insertFirst(&head, 64);

    display(head);
    printf("No of nodes :%d\n", count(head));

    insertLast(&head, 56);
    display(head);
    printf("No of nodes :%d\n", count(head));

    deleteFirst(&head);
    display(head);
    printf("No of nodes :%d\n", count(head));

    deleteLast(&head);
    display(head);
    printf("No of nodes :%d\n", count(head));

    insertAtPos(&head, 24, 3);
    display(head);
    printf("No of nodes :%d\n", count(head));

    deleteAtPos(&head, 3);
    display(head);
    printf("No of nodes :%d\n", count(head));

    return 0;
}