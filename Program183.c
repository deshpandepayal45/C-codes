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

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while (First != NULL)
    {
        printf("| %d |-> ", First->data);
        First = First->next;
    }
    printf("NULL \n");
}

int Search(PNODE first, int No)
{
    int flag = -1;
    int Counter = 1;
    while (first != NULL)
    {
        if (first->data == No)
        {
            flag = Counter;
            break;
        }
        first = first->next;
        Counter++;
    }
    return flag;
}
int LastSearch(PNODE first, int No)
{
    int flag = -1;
    int Counter = 1;
    while (first != NULL)
    {
        if (first->data == No)
        {
            flag = Counter;
        }
        first = first->next;
        Counter++;
    }
    return flag;
}
int Frequency(PNODE first, int No)
{
    // int flag = -1;
    int Counter = 0;
    while (first != NULL)
    {
        if (first->data == No)
        {
            Counter++;
        }
        first = first->next;
        // Counter++;
    }
    return Counter;
}
int MiddleElement(PNODE first)
{
    PNODE student = first;
    PNODE teacher = first;

    while ((teacher != NULL) && (teacher->next != NULL))
    {
        teacher = teacher->next->next;
        student = student->next;
    }
    return (student->data);
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 51);  // InsertFirst(60,51)
    InsertFirst(&Head, 121); // InsertFirst(60,51)
    InsertFirst(&Head, 111); // InsertFirst(60,51)
    InsertFirst(&Head, 101); // InsertFirst(60,51)
    InsertFirst(&Head, 51);  // InsertFirst(60,51)
    InsertFirst(&Head, 21);  // InsertFirst(60,21)
    // InsertFirst(&Head, 11);  // InsertFirst(60,11)

    Display(Head);
    int iRet1 = 0, iRet2 = 0;
    iRet = Search(Head, 51);
    if (iRet == -1)
    {
        printf("There is no such elemenet in LL\n");
    }
    else
    {
        printf("Number is present in Linked list at Pos: %d \n", iRet);
    }

    iRet1 = LastSearch(Head, 51);
    if (iRet == -1)
    {
        printf("There is no such elemenet in LL\n");
    }
    else
    {
        printf("Number is present in Linked list at Pos: %d \n", iRet1);
    }

    iRet2 = Frequency(Head, 51);
    printf("Frequency of the number is :%d\n", iRet2);

    int iRet3 = 0;
    iRet3 = MiddleElement(Head);
    printf("Middle element is: %d\n", iRet3);
    return 0;
}