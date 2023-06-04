#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

struct Node
{
    int iData;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void display(PNODE first)
{

    if ((first) == NULL)
    {
        printf("Linked List is Empty.\n");
        return;
    }
    else
    {
        printf("\n\t\t\t\t");
        while ((first) != NULL)
        {
            printf("|%d|-> ", first->iData);
            first = first->next;
        }
    }
    printf("NULL\n");
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
void insertFirst(PPNODE first, int iNo)
{

    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->iData = iNo;
    newn->next = NULL;

    if ((*first) == NULL)
    {
        *first = newn;
    }
    else
    {

        newn->next = *first;
        *first = newn;
    }
}

void insertLast(PPNODE first, int iNo)
{

    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->iData = iNo;
    newn->next = NULL;
    PNODE temp = *first;

    if ((temp) == NULL)
    {
        temp = newn;
    }
    else
    {

        while ((temp)->next != NULL)
        {
            temp = (temp)->next;
        }
        (temp)->next = newn;
    }
}

void insertAtPosition(PPNODE first, int iNo, int iPos)
{

    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->iData = iNo;
    newn->next = NULL;
    PNODE temp = *first;
    int nodeCnt = count(temp);
    int iCnt = 1;

    if (iPos < 1 || iPos > nodeCnt + 1)
    {
        printf("Invalid Position...\n");
        return;
    }
    else if (iPos == 1)
    {
        insertFirst(first, iNo);
    }
    else if (iPos == nodeCnt + 1)
    {

        insertLast(first, iNo);
    }
    else
    {

        while (iCnt < iPos - 1)
        {

            temp = temp->next;
            iCnt++;
        }
        newn->next = temp->next;
        temp->next = newn;
    }

    printf("\n\t\t\t( %d ) Inserted at  Index %d .....\n", iNo, iPos);
}

void deleteFirst(PPNODE first)
{

    PNODE temp = *first;
    int nodeCnt = count(*first);

    if ((*first) == NULL)
    {
        printf("Empty List\n");
        return;
    }
    if (nodeCnt == 1)
    {

        free((*first));
        *first = NULL;
    }
    else
    {

        *first = (*first)->next;
        free(temp);
        temp->next = NULL;
    }
}
void deleteLast(PPNODE first)
{

    PNODE iTemp = *first;
    if ((*first) == NULL)
    {
        printf("Empty List\n");
        return;
    }
    if ((iTemp)->next == NULL)
    {
        free(iTemp);
    }
    else
    {
        while ((iTemp)->next->next != NULL)
        {

            iTemp = iTemp->next;
        }
        free(iTemp->next);
        iTemp->next = NULL;
    }
}
void deleteAtPosition(PPNODE first, int iPos)
{

    int nodeCnt = count(*first);
    int iCnt = 1;
    PNODE iTemp = *first;
    PNODE iTemp1 = NULL;

    printf("HII");
    if ((*first) == NULL)
    {
        printf("Empty List\n");
        return;
    }
    else if (iPos < 1 || iPos > nodeCnt)
    {
        printf("Invalid Position\n");
        return;
    }
    else if (iPos == 1)
    {
        printf("We are here");
        deleteFirst(first);
    }
    else if (iPos == nodeCnt)
    {
        deleteLast(first);
    }
    else
    {

        while (iCnt < iPos - 1)
        {
            iTemp = iTemp->next;
            iCnt++;
        }
        iTemp1 = iTemp->next->next;
        iTemp->next->next = NULL;
        free(iTemp->next);
        iTemp->next = iTemp1;
    }
}
int main()
{

    PNODE Head = NULL;
    int iRet = 0;
    int iChoice = 0;
    int iPos = 0;
    int iNo = 0;

    while (1)
    {

        iRet = count(Head);
        printf("\n++++++++++++++++++++++ | Singly Linked List [%d Numbers Available] | ++++++++++++++++++++++\n", iRet);
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Select Any Option:");
        scanf("%d", &iChoice);
        switch (iChoice)
        {
        case 1:
            printf("Enter No:");
            scanf("%d", &iNo);
            printf("Enter Position:");
            scanf("%d", &iPos);
            insertAtPosition(&Head, iNo, iPos);
            break;

        case 2:
            printf("Enter Position:");
            scanf("%d", &iPos);
            deleteAtPosition(&Head, iPos);
            break;

        case 3:
            display(Head);
            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice\n");
        }
    }
    return 0;
}