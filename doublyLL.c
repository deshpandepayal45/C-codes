#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void insertFirst(PPNODE first, int idata)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = idata;
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
void insertLast(PPNODE first, int idata)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = idata;
    newn->next = NULL;
    newn->prev = NULL;
    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        PNODE temp = *first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newn->prev = temp;
        temp->next = newn;
    }
}
void Display(PNODE first)
{
    if (first == NULL)
    {
        printf("Linked list is empty:\n");
    }
    else
    {
        while (first != NULL)
        {
            printf("|%d|->", first->data);
            first = first->next;
        }
        printf("NULL\n");
    }
}

void deleteFirst(PPNODE first)
{
    if (*first == NULL)
    {
        printf("Linked list doesnt have any elements");
        return;
    }
    else
    {
        *first = (*first)->next;
        (*first)->prev = NULL;
    }
}
void deleteLast(PPNODE first)
{
    if (*first == NULL)
    {
        printf("Linked list doesnt have any elements");
        return;
    }
    else
    {
        PNODE temp = *first;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        free(temp->next);
    }
}

void reverseLL(PPNODE first)
{
    if (*first == NULL)
    {
        printf("Linked list is empty:\n");
    }
    else
    {
        PNODE temp = *first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        // temp = temp->next;

        while (temp->prev != NULL)
        {
            printf("|%d|->", temp->data);
            temp = temp->prev;
        }
        printf("|%d|->", temp->data);
        printf("NULL\n");
    }
}
int main()
{
    PNODE Head = NULL;
    insertFirst(&Head, 67);
    insertFirst(&Head, 687);
    insertFirst(&Head, 672);

    Display(Head);

    insertLast(&Head, 2334);
    Display(Head);

    reverseLL(&Head);

    return 0;
}