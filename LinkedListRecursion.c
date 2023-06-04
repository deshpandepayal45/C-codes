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

void InsertLastR(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;
    newn->data = no;
    newn->next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        if (temp->next != NULL)
        {
            temp = temp->next;
            InsertLastR(First, no);
        }
        temp->next = newn;
    }
}

void DisplayR(PNODE First)
{

    if (First != NULL)
    {
        printf("| %d |-> ", First->data);
        First = First->next;
        DisplayR(First);
    }
}
void DisplayR1(PNODE First)
{

    if (First != NULL)
    {
        DisplayR1(First->next);
        printf("| %d |-> ", First->data);
        // First = First->next;
        }
}

int CountR(PNODE First)
{
    static int iCnt = 0;

    if (First != NULL)
    {
        iCnt++;
        First = First->next;
        CountR(First);
    }
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLastR(&Head, 11);
    InsertLastR(&Head, 21);
    // InsertLast(&Head, 51);
    // InsertLast(&Head, 101);

    // DisplayR(Head);
    DisplayR1(Head);

    iRet = CountR(Head);
    printf("Number of nodes are : %d\n", iRet);

    return 0;
}