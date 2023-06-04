#include <iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
class singlyReverse
{
public:
    struct node *head;

    singlyReverse();
    void insertFirst(int no);
    void Display();
    int Count();
};
singlyReverse::singlyReverse()
{
    head = NULL;
}
void singlyReverse::insertFirst(int no)
{
    struct node *newn = new struct node;
    newn->data = no;
    newn->next = NULL;

    if (head == NULL)
    {
        head = newn;
    }
    else
    {
        newn->next = head;
        head = newn;
    }
}
void singlyReverse::Display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << "|" << temp->data << "|->";
        temp = temp->next;
    }
    cout << "NULL\n";
}
int singlyReverse::Count()
{
    int iCnt = 0;
    struct node *temp = head;
    while (temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }
    return iCnt;
}
class singlyReverse2
{
public:
    struct node *Tail;
    struct node *head;
    singlyReverse2();
    void insertFirst(int no);
    void Display();
    int Count();
    void concat();
};
singlyReverse2::singlyReverse2()
{
    Tail = NULL;
    head = NULL;
}
void singlyReverse2::insertFirst(int no)
{
    struct node *newn = new struct node;
    newn->data = no;
    newn->next = NULL;

    if (Tail == NULL)
    {
        Tail = newn;
    }
    else
    {
        newn->next = Tail;
        Tail = newn;
    }
}
void singlyReverse2::Display()
{
    struct node *temp = Tail;
    while (temp != NULL)
    {
        cout << "|" << temp->data << "|->";
        temp = temp->next;
    }
    cout << "NULL\n";
}
int singlyReverse2::Count()
{
    int iCnt = 0;
    struct node *temp = Tail;
    while (temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }
    return iCnt;
}
void singlyReverse2::concat()
{
    struct node *temp1 = head;
    struct node *temp2 = Tail;

    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        temp1->next->data = temp2->data;
        temp2 = temp2->next;
    }
}

int main()
{
    singlyReverse obj;
    obj.insertFirst(23);
    obj.insertFirst(93);
    obj.insertFirst(13);
    obj.insertFirst(238);

    obj.Display();

    cout << "\n\n";
    singlyReverse2 obj1;
    obj1.insertFirst(23);
    obj1.insertFirst(93);
    obj1.insertFirst(13);
    obj1.insertFirst(238);

    obj1.Display();
    obj1.concat();

    obj1.Display();

    return 0;
}