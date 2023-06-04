#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
bool Search(PNODE root, int No)
{
    while (root != NULL)
    {
        if (root->data == No)
        {
            break;
        }
        else if (No > root->data)
        {
            root = root->rChild;
        }
        else if (No < root->data)
        {
            root = root->lChild;
        }
    }
    if (root == NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    PNODE Head = NULL;
    Insert(&Head, 11);
    Insert(&Head, 7);
    Insert(&Head, 21);
    bool bRet = false;

    printf("\n Data using preorder traversal\t");
    Preorder(Head);

    printf("\n Data using Inorder traversal\t");
    Inorder(Head);

    printf("\n Data using Postorder traversal\t");
    Postorder(Head);

    bRet = Search(Head, 21);
    if (bRet == true)
    {
        printf("Element is there in BST\n");
    }
    else
    {
        printf("There is no element in BST");
    }
    return 0;
}