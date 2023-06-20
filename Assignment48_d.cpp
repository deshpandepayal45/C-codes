// write a generic program to accept n values and count frequency of any specific
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
    int Frequency(T val);
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
int ArrayX<T>::Frequency(T val)
{
    int i = 0;
    for (i = size - 1; i >= 0; i--)
    {
        if (Arr[i] == val)
        {
            break;
        }
    }
    if (i <= 0)
    {
        return -1;
    }
    else
    {
        return i + 1;
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
    int val = 0;
    cout << "Enter value :\n";
    cin >> val;
    iRet = obj1.Frequency(val);
    cout << "LAst Occurance of " << val << " is " << iRet << endl;

    cout << "Floating arayy" << endl;
    ArrayX<float> obj2(size);
    obj2.accept();
    obj2.Display();
    iRet = 0;
    float val1 = 0;
    cout << "Enter value :\n";
    cin >> val1;
    iRet = obj2.Frequency(val1);
    cout << "LAst Occurance of " << val1 << " is " << iRet << endl;

    cout << "double arayy" << endl;
    ArrayX<double> obj3(size);
    obj3.accept();
    obj3.Display();
    iRet = 0;
    double val2 = 0;
    cout << "Enter value :\n";
    cin >> val2;
    iRet = obj3.Frequency(val2);
    cout << "LAst Occurance of " << val2 << " is " << iRet << endl;

    cout << "Character arayy" << endl;
    ArrayX<char> obj4(size);
    obj4.accept();
    obj4.Display();
    iRet = 0;
    char val3 = '\0';
    cout << "Enter value :\n";
    cin >> val3;
    iRet = obj4.Frequency(val3);
    cout << "LAst Occurance of " << val3 << " is " << iRet << endl;
    return 0;
}