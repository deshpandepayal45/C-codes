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

void insertFirst(PPNODE first, PPNODE last, int Data)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = Data;
    if (*first == NULL)
    {
        *first = *last = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
    (*last)->next = *first;
}

void deleteFirst(PPNODE first, PPNODE last)
{
    if (*first == NULL && *last == NULL)
    {
        return;
    }
    else
    {
        *first = (*first)->next;
    }
    (*last)->next = *first;
}
void display(PNODE first, PNODE last)
{
    if (first == NULL && last == NULL)
    {
        printf("Linked list is empty:\n");
    }
    else
    {
        do
        {
            printf("|%d|->", first->data);
            first = first->next;
        } while ((last)->next != first);
        printf("NULL\n");
    }
}
int main()
{
    PNODE Head = NULL;
    PNODE Last = NULL;
    insertFirst(&Head, &Last, 67);
    insertFirst(&Head, &Last, 97);
    insertFirst(&Head, &Last, 07);
    display(Head, Last);
    deleteFirst(&Head, &Last);
    deleteFirst(&Head, &Last);
    display(Head, Last);

    return 0;
}