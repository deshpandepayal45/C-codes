#include <iostream>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;

class linkedList
{
public:
    PNODE Head = NULL;
    linkedList();
    void insertFirst(int idata);
    void display();
};
linkedList::linkedList()
{
    PNODE Head = NULL;
}

void linkedList::insertFirst(int idata)
{
    PNODE temp = Head;
    PNODE newn = new NODE;
    newn->data = idata;
    if (temp == NULL)
    {
        temp = newn;
        Head = temp;
    }
    else
    {
        //  temp = temp->next;
        newn->next = temp;
        temp = newn;
        Head = temp;
    }
}
void linkedList::display()
{
    PNODE temp = Head;
    if (temp == NULL)
    {
        printf("Linked list is empty:\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("|%d|->", temp->data);
            temp = temp->next;
        }
        printf("NULL");
    }
}
int main()
{
    linkedList obj;
    obj.insertFirst(56);
    obj.insertFirst(56);
    obj.insertFirst(56);
    obj.display();
    return 0;
}