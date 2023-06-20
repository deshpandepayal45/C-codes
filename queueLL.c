#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int data;
    struct Queue *next;
};
typedef struct Queue QUEUE;
typedef struct Queue *PQUEUE;
typedef struct Queue **PPQUEUE;
void insertFirst(PPQUEUE head, int idata)
{
    PQUEUE newq = (struct Queue *)malloc(sizeof(QUEUE));
    newq->data = idata;
    newq->next = NULL;
    if (*head == NULL)
    {
        *head = newq;
    }
    else
    {
        newq->next = *head;

        *head = newq;
    }
}
void Display(PQUEUE head)
{
    if (head == NULL)
    {
        printf("There is no nodes in linked list:\n");
    }
    else
    {
        while (head != NULL)
        {
            printf("|%d|->", head->data);
            head = (head)->next;
        }
        printf("NULL\n");
    }
}
void deleteLast(PPQUEUE head)
{
    struct Queue *temp = *head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    free(temp->next);
}
int main()
{
    PQUEUE head = NULL;
    insertFirst(&head, 46);
    insertFirst(&head, 46);
    insertFirst(&head, 46);
    insertFirst(&head, 46);
    Display(head);
    deleteLast(&head);
    Display(head);
    return 0;
}