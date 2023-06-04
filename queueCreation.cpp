#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Queue
{
public:
    struct node *First;
    int iCount;

    Queue();

    bool IsQueueEmpty();
    void EnQueue(int no); // Insert
    int DeQueue();        // Delete
    void Display();
};

Queue ::Queue()
{
    First = NULL;
    iCount = 0;
}

bool Queue ::IsQueueEmpty()
{
    if (iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Queue ::EnQueue(int no) // insertLast
{
    struct node *newn = new node;
    newn->data = no;
    newn->next = NULL;
    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node *temp = First;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

int Queue ::DeQueue()
{
    if (First == NULL)
    {
        cout << "Queue is empty";
        return -1;
    }
    else
    {
        struct node *temp = First;
        int value = First->data;

        First = First->next;
        delete temp;
        iCount--;
        return value;
    }
}

void Queue ::Display()
{
    if (First == NULL)
    {
        cout << "Queue is empty:";
        return;
    }
    else
    {
        struct node *temp = First;
        while (temp != NULL)
        {
            cout << "|" << temp->data << "|->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
}

int main()
{
    Queue obj;
    int iRet = 0;
    obj.EnQueue(54);
    obj.EnQueue(64);
    obj.EnQueue(34);
    obj.EnQueue(44);

    obj.Display();
    iRet = obj.DeQueue();
    cout << "poped element is :" << iRet << "\n";
    obj.Display();
    obj.IsQueueEmpty();

    return 0;
}