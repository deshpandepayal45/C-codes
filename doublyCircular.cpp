#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
class doublyCL
{
public:
    struct node *first;
    struct node *last;

    doublyCL();
    void Display();
    int Count();
    void insertFirst(int no);
    void insertLast(int no);
    void insertAtPos(int no, int pos);
    void deleteFirst();
    void deleteLast();
    void deleteAtPos(int pos);
};
doublyCL::doublyCL()
{
    first = NULL;
    last = NULL;
}
void doublyCL::Display()
{
    if (first == NULL)
    {
        cout << "empty doubly circular linked list:\n";
        return;
    }
    else
    {
        struct node *temp1 = first;
        struct node *temp2 = last;
        do
        {
            cout << "|" << temp1->data << "|->";
            temp1 = temp1->next;
        } while (temp1 != temp2->next);
        cout << "NULL\n";
    }
}
int doublyCL::Count()
{
    if (first == NULL && last == NULL)
    {
        cout << "there are no nodes in linked list:\n";
        return 0;
    }
    else
    {
        struct node *temp1 = first;
        struct node *temp2 = last;
        int cnt = 0;
        do
        {
            cnt++;
            temp1 = temp1->next;
        } while (temp1 != temp2->next);
        return cnt;
    }
}
void doublyCL::insertFirst(int no)
{
    struct node *newn = new node;

    newn->data = no;
    newn->next = NULL;
    if (first == NULL)
    {
        first = last = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
        // last->next = first;
    }
    first->prev = last;
    last->next = first;
}
void doublyCL::insertLast(int no)
{
    struct node *newn = new node;
    newn->data = no;
    newn->next = NULL;

    if (first == NULL && last == NULL)
    {
        first = last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;
        last = newn;
    }
    last->next = first;
    first->prev = last;
}
void doublyCL::insertAtPos(int no, int pos)
{
    int nodeCnt = Count();
    if (pos < 1 || pos > nodeCnt + 1)
    {
        cout << "invalid choice:\n";
        return;
    }
    if (pos == 1)
    {
        insertFirst(no);
    }
    else if (pos == nodeCnt + 1)
    {
        insertLast(no);
    }
    else
    {
        struct node *newn = new node;
        newn->data = no;
        newn->next = NULL;
        struct node *temp = first;
        int iCnt = 1;
        while (iCnt < pos - 1)
        {
            temp = temp->next;
            iCnt++;
        }
        newn->next = temp->next;
        newn->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
    last->next = first;
    first->prev = last;
}
void doublyCL::deleteFirst()
{
    if (first == NULL && last == NULL)
    {
        cout << "linked list is empty:\n";
        return;
    }
    else
    {
        struct node *temp = first;
        first = first->next;
        delete temp;
        last->next = first;
        first->prev = last;
    }
}
void doublyCL::deleteLast()
{
    if (first == NULL && last == NULL)
    {
        cout << "invalid position";
        return;
    }
    else
    {
        struct node *temp = first;
        struct node *temp2 = last;
        while (temp->next->next != last)
        {
            temp = temp->next;
        }
        delete temp2;
        last = temp->next;
        last->next = first;
        first->prev = last;
    }
}
void doublyCL::deleteAtPos(int pos)
{
    int nodeCnt = Count();
    if (pos < 1 || pos > nodeCnt)
    {
        cout << "invalid choice\n";
        return;
    }
    if (pos == 1)
    {
        deleteFirst();
    }
    else if (pos == nodeCnt)
    {
        deleteLast();
    }
    else
    {
        int iCnt = 1;
        struct node *temp = first;
        struct node *temp2 = NULL;
        while (iCnt < pos - 1)
        {
            temp = temp->next;
        }
        temp2 = temp->next;
        temp->next = temp2->next;
        temp2->next->prev = temp;
        delete temp2;
        temp2 = NULL;
    }
    last->next = first;
    first->prev = last;
}

int main()
{
    doublyCL obj;
    obj.insertFirst(67);
    obj.insertFirst(45);
    obj.Display();
    obj.insertLast(627);
    obj.Display();

    obj.insertAtPos(22, 3);
    obj.Display();
    obj.insertAtPos(272, 2);
    obj.Display();
    obj.deleteFirst();
    obj.Display();
    obj.deleteLast();
    obj.Display();
    obj.deleteAtPos(2);
    obj.Display();
    return 0;
}