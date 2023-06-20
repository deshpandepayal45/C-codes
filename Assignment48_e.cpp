// write a generic program to accept n values and return reverse order
// value

#include <iostream>
using namespace std;
template <class T>
class ArrayX
{
public:
    int size = 0;
    T *Arr;

    ArrayX(int size);
    void accept();
    void Display();
    void ReverseOrder();
};
template <class T>
ArrayX<T>::ArrayX(int size)
{
    this->size = size;
    this->Arr = new T[size];
}
template <class T>
void ArrayX<T>::accept()
{
    cout << "Enter array elments:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }
}
template <class T>
void ArrayX<T>::Display()
{
    cout << "Array elements are:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}
template <class T>
void ArrayX<T>::ReverseOrder()
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp;
        temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int size = 0;
    cout << "Enter the array size" << endl;
    cin >> size;

    cout << "Integer arayy" << endl;
    ArrayX<int> obj1(size);
    obj1.accept();
    obj1.Display();
    int iRet = 0;
    obj1.ReverseOrder();
    obj1.Display();

    cout << "Floating arayy" << endl;
    ArrayX<float> obj2(size);
    obj2.accept();
    obj2.Display();
    iRet = 0;
    obj2.ReverseOrder();

    obj2.Display();
    cout << "double arayy" << endl;
    ArrayX<double> obj3(size);
    obj3.accept();
    obj3.Display();
    iRet = 0;

    obj3.ReverseOrder();
    obj3.Display();

    cout << "Character arayy" << endl;
    ArrayX<char> obj4(size);
    obj4.accept();
    obj4.Display();
    iRet = 0;

    obj4.ReverseOrder();
    obj4.Display();

    return 0;
}