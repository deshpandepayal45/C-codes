#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *node;
};

typedef struct stack NODE;
typedef struct stack *PNODE;
int main()
{
    PNODE st = NULL;
    printf("Enter the size of the array:\n");
    scanf("%d", &st->size);

    PNODE node = (PNODE)malloc(sizeof(NODE));
    return 0;
}