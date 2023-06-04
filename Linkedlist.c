#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

struct node
{

    int iData;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;
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
void insertFirst(PPNODE First, int iNO)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->iData = iNO;
    newn->next = NULL;
    newn->prev = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn;
    }
}
void insertLast(PPNODE first, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(PNODE));
    PNODE temp = *first;
    newn->iData = iNo;
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
        newn->next = NULL;
    }
}
void deleteFirst(PPNODE first)
{

    if (*first == NULL)
    {
        return;
    }
    else if (count(*first) == 1)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        *first = (*first)->next;
        free((*first)->prev);
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
void display(PNODE first)
{
    printf("NULL");
    while (first != NULL)
    {
        printf("<=%d=>", first->iData);
        first = first->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE Head = NULL;
    insertFirst(&Head, 21);
    insertFirst(&Head, 31);
    insertFirst(&Head, 51);

    printf("Elements are:\n");
    display(Head);
    printf("Number of Elements are:%d \n", count(Head));

    insertLast(&Head, 99);
    printf("Elements are:\n");
    display(Head);
    printf("Number of Elements are:%d \n", count(Head));

    deleteFirst(&Head);
    display(Head);
    printf("Number of Elements are:%d \n", count(Head));

    deleteLast(&Head);
    display(Head);
    printf("Number of Elements are:%d \n", count(Head));

    return 0;
}