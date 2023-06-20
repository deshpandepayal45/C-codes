// Accept one number from user and print that numbr of * on screen
#include <stdio.h>
void Accept(int iNum)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNum; iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;
    iValue=5;
    Accept(iValue);
    return 0;
}