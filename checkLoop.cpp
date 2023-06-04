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
int checkLoop(PNODE Head)
{
    PNODE p, q;
    p = q = Head;
    do
    {
        p = p->next;
        q = q->next;
        if (q != NULL)
        {
            q = q->next;
        }
    } while (p && q && p != q);

    if (p == q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
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
    // InsertFirst(&Head, 21);  // InsertFirst(60,21)
    //  InsertFirst(&Head, 11);  // InsertFirst(60,11)
    // Display(Head);
    PNODE t1, t2;
    t1 = Head->next->next;
    t2 = Head->next->next->next->next;
    t2->next = t1;

    int ans = 0;
    ans = checkLoop(Head);
    if (ans == 1)
    {
        printf("Linked list contains loop\n");
    }
    else
    {
        printf("Linked list doesnot contain any loop\n");
    }

    // Display(Head);

    return 0;
}