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

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if ((*First == NULL) && (*Last == NULL)) // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else // LL contains atleast one node
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }
}

void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if ((*First == NULL) && (*Last == NULL)) // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else // LL contains atleast one node
    {
        (*Last)->next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void Display(PNODE First, PNODE Last)
{
    printf("Elements of Linked list are : \n");

    do
    {
        printf("| %d |-> ", First->data);
        First = First->next;
    } while (First != Last->next);
    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First->next;
    } while (First != Last->next);
    return iCnt;
}
void deleteFirst(PPNODE first, PPNODE last)
{
    if ((*first == NULL) && (*last == NULL)) // empty
    {
        return;
    }
    else if (*first == *last) // single
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
        /*
        PNODE temp=*first;
        *first=*first->next;
        free(temp);
        (*last)->next=*first;

        */
    }
}
void deleteLast(PPNODE first, PPNODE last)
{
    if (*first == NULL && *last == NULL)
    {
        return;
    }
    else if (*first == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        PNODE temp = *first;
        // while (temp->next = *last)
        // {
        //     temp = temp->next;
        // }
        // free(*last);
        // *last = temp;
        // *last->next = *first;

        while (temp->next->next != (*last)->next)
        {
            temp = temp->next;
        }
        free(*last);
        *last = temp;
        (*last)->next = *first;
    }
}
void insertAtPos(PPNODE first, PPNODE last, int iData, int iPos)
{
    int iNodeCnt = 0;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iData;
    newn->next = NULL;
    PNODE temp = *first;
    iNodeCnt = Count(*first, *last);
    if (iPos < 1 && iPos > iNodeCnt + 1)
    {
        printf("invalid Position");
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(first, last, iData);
    }
    else if (iPos == iNodeCnt + 1)
    {
        InsertLast(first, last, iData);
    }
    else
    {
        for (int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}
void deleteAtPos(PPNODE first, PPNODE last, int iPos)
{
    PNODE temp1 = *first;
    PNODE temp2 = NULL;
    int iNodeCnt = 0;
    iNodeCnt = Count(*first, *last);
    if (iPos < 0 && iPos > iNodeCnt)
    {
        printf("invalid Position");
        return;
    }
    if (iPos == 1)
    {
        deleteFirst(first, last);
    }
    else if (iPos == iNodeCnt)
    {
        deleteLast(first, last);
    }
    else
    {
        for (int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;

        temp1->next = temp2->next;

        free(temp2);
    }
}
int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);

    Display(Head, Tail);
    iRet = Count(Head, Tail);

    printf("Number of elements are : %d\n", iRet);
    deleteFirst(&Head, &Tail);
    Display(Head, Tail);
    iRet = Count(Head, Tail);

    printf("Number of elements are : %d\n", iRet);

    deleteLast(&Head, &Tail);
    Display(Head, Tail);
    iRet = Count(Head, Tail);

    printf("Number of elements are : %d\n", iRet);
    insertAtPos(&Head, &Tail, 78, 4);
    Display(Head, Tail);
    iRet = Count(Head, Tail);

    printf("Number of elements are : %d\n", iRet);

    deleteAtPos(&Head, &Tail, 5);
    Display(Head, Tail);
    iRet = Count(Head, Tail);

    printf("Number of elements are : %d\n", iRet);
    return 0;
}