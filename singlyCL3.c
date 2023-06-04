#include <stdio.h>
#include <stdlib.h>
#pragma pack(1) // for avoiding memory wastage
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void insertAtFirst(PPNODE first, PPNODE last, int iData)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iData;
    newn->next = NULL;
    newn->prev = NULL;

    if (*first == NULL && *last == NULL) // LL is empty
    {
        *first = newn;
        *last = newn;
    }
    else // if ll contains one or more nodes
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;
    }

    (*last)->next = *first;
    (*first)->prev = *last;
}
void insertAtLast(PPNODE first, PPNODE last, int iData)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iData;
    newn->next = NULL;
    newn->prev = NULL;

    if ((*first == NULL) && (*last == NULL))
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        newn->prev = *last;
        (*last)->next = newn;
        *last = newn;
    }
    (*last)->next = *first;
    (*first)->prev = *last;
}
void deleteAtFirst(PPNODE first, PPNODE last)
{
    if (*first == NULL && *last == NULL)
    {
        return;
    }
    if (*first == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *first = (*first)->next;
        free((*last)->next);

        (*last)->next = *first;
        (*first)->prev = *last;
    }
}

void deleteAtLast(PPNODE first, PPNODE last)
{
    if (*first == NULL && *last == NULL)
    {
        return;
    }
    if (*first == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *last = (*last)->prev;
        free((*first)->prev);

        (*last)->next = *first;
        (*first)->prev = *last;
    }
}

void Display(PNODE first, PNODE last)
{
    do
    {
        printf("|%d|->", first->data);
        first = first->next;
    } while (first != last->next);
    printf("NULL\n");
}
int Count(PNODE first, PNODE last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        first = first->next;
    } while (first != last->next);

    return iCnt;
}
void insertAtPos(PPNODE first, PPNODE last, int iPos, int iData)
{
    int iNodeCnt = 0;
    iNodeCnt = Count(*first, *last);
    int iCnt = 0;
    PNODE temp = *first;

    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iData;
    newn->next = NULL;
    newn->prev = NULL;

    if (iPos <= 0 || iPos > iNodeCnt + 1)
    {
        return;
    }
    if (iPos == 1)
    {
        insertAtFirst(first, last, iData);
    }
    else if (iPos == iNodeCnt + 1)
    {
        insertAtLast(first, last, iData);
    }
    else
    {

        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;
    }
}

void deleteAtPos(PPNODE first, PPNODE last, int iPos)
{
    int iNodeCnt = 0;
    iNodeCnt = Count(*first, *last);
    PNODE temp = *first;
    int iCnt = 0;

    if (iPos <= 0 || iPos > iNodeCnt)
    {
        return;
    }
    if (iPos == 1)
    {
        deleteAtFirst(first, last);
    }
    else if (iPos == iNodeCnt)
    {
        deleteAtLast(first, last);
    }
    else
    {
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}
int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    insertAtFirst(&Head, &Tail, 5);
    insertAtFirst(&Head, &Tail, 46);
    insertAtFirst(&Head, &Tail, 35);

    insertAtLast(&Head, &Tail, 89);
    insertAtLast(&Head, &Tail, 9);

    Display(Head, Tail);
    int iRet = 0;
    iRet = Count(Head, Tail);
    printf("number of elements:%d\n", iRet);

    deleteAtFirst(&Head, &Tail);
    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("number of elements:%d\n", iRet);

    deleteAtLast(&Head, &Tail);
    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("number of elements:%d\n", iRet);

    insertAtPos(&Head, &Tail, 2, 99);
    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("number of elements:%d\n", iRet);

    deleteAtPos(&Head, &Tail, 4);
    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("number of elements:%d\n", iRet);

    return 0;
}