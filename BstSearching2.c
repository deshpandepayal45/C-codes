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
    bool flag = false;
    while (root != NULL)
    {
        if (root->data == No)
        {
            flag = true;
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
    return flag;
}
int CountLeafNode(PNODE root)
{
    static int Count = 0;
    if (root != NULL)
    {
        if ((root->lChild == NULL) && (root->rChild == NULL))
        {
            Count++;
        }
        CountLeafNode(root->rChild);
        CountLeafNode(root->lChild);
    }
    return Count;
}
int CountParentNode(PNODE root)
{
    static int Count = 0;
    if (root != NULL)
    {
        if ((root->lChild == NULL) || (root->rChild == NULL))
        {
            Count++;
        }
        CountParentNode(root->rChild);
        CountParentNode(root->lChild);
    }
    return Count;
}
int CountComplateParentNode(PNODE root)
{
    static int Count = 0;
    if (root != NULL)
    {
        if ((root->lChild != NULL) && (root->rChild != NULL))
        {
            Count++;
        }
        CountLeafNode(root->rChild);
        CountLeafNode(root->lChild);
    }
    return Count;
}
int CountEvenNodes(PNODE root)
{
    static int Count = 0;
    if (root != NULL)
    {
        if ((root->data % 2) == 0)
        {
            printf("%d \n", root->data);
            Count++;
        }
        CountEvenNodes(root->rChild);
        CountEvenNodes(root->lChild);
    }
    return Count;
}
int main()
{
    PNODE Head = NULL;
    Insert(&Head, 11);
    Insert(&Head, 7);
    Insert(&Head, 21);
    bool bRet = false;
    int iRet = 0, iRet2 = 0, iRet1 = 0;

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

    iRet = CountLeafNode(Head);
    printf("Number of leaf nodes are :%d \n", iRet);

    iRet2 = CountParentNode(Head);
    printf("Number of parent nodes are: %d \n", iRet2);

    iRet1 = CountComplateParentNode(Head);
    printf("Number of complete Parent nodes: %d\n", iRet1);
    return 0;
}