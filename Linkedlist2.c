/*Linked List*/
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
int main()
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = 11;
    newn->next = NULL;

    printf("%d\n", newn->data);
    printf("Size of structure %ld\n", sizeof(NODE));

    return 0;
}