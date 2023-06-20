// wrie the a program whioch accept number from user and check wheather
//  it is greater than 100 or noy
#include <stdio.h>
#include <stdbool.h>
bool checkGreater(int iNo)
{
    if (iNo >= 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iNum = 0;
    printf("enter the number :\n");
    scanf("%d", &iNum);

    bool bAns = false;
    bAns = checkGreater(iNum);

    if (bAns == true)
    {
        printf("greater :\n");
    }
    else
    {
        printf("Smaller :\n");
    }
    return 0;
}