#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *lChild;
    struct node *rChild;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Insert(PPNODE root, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->lChild = NULL;
    newn->rChild = NULL;
    PNODE temp = *root;

    if (*root == NULL)
    {
        *root = newn;
    }
    else
    {
        while (1)
        {
            if (No > temp->data)
            {
                if (temp->rChild == NULL)
                {
                    temp->rChild = newn;
                    break;
                }
                temp = temp->rChild;
            }
            else if (No < temp->data)
            {
                if (temp->lChild == NULL)
                {
                    temp->lChild = newn;
                    break;
                }
                temp = temp->lChild;
            }
            else if (No == temp->data)
            {
                free(newn);
                printf("Duplicate element not allowd:\n");
                break;
            }
        }
    }
}
void Inorder(PNODE root)
{
    if (root != NULL)
    {
        Inorder(root->lChild);
        printf("%d\t", root->data);
        Inorder(root->rChild);
    }
}
void Preorder(PNODE root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        Preorder(root->lChild);
        Preorder(root->rChild);
    }
}
void Postorder(PNODE root)
{
    if (root != NULL)
    {
        Postorder(root->lChild);
        Postorder(root->rChild);
        printf("%d\t", root->data);
    }
}
int main()
{
    PNODE Head = NULL;
    Insert(&Head, 11);
    Insert(&Head, 7);
    Insert(&Head, 21);

    printf("\n Data using preorder traversal\t");
    Preorder(Head);

    printf("\n Data using Inorder traversal\t");
    Inorder(Head);

    printf("\n Data using Postorder traversal\t");
    Postorder(Head);
    return 0;
}