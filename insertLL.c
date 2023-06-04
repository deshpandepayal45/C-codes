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

void insertFirst(PPNODE first, int iNO)
{
    // Allocate a memory for new node
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNO;
    newn->next = NULL;

    // check linked list is empty
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
void display(PNODE first)
{
    while (first != NULL)
    {
        printf("|%d|->", first->data);
        first = first->next;
    }
    printf(" NULL\n");
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
void insertLast(PPNODE first, int iNo)
{
    PNODE temp = *first;

    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
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
        temp->next->next = NULL;
    }
}
int main()
{
    PNODE Head = NULL;
    insertFirst(&Head, 51);
    insertFirst(&Head, 21);
    insertFirst(&Head, 11);

    display(Head);

    int iRet = 0;
    iRet = count(Head);
    printf("\nCount of node:%d\n", iRet);

    insertLast(&Head, 78);
    display(Head);

    return 0;
}