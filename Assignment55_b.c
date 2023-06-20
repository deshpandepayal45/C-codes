// write a program which accept a number from user and return its digits addition in recursive way
#include <stdio.h>
int Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0;
    static int sum = 0;
    if (iNo != 0)
    {
        iDigit = iNo % 10;
        sum = sum + iDigit;
        iNo = iNo / 10;
        Display(iNo);
    }
    return sum;
}
int main()
{
    int iVal = 0;
    int iRet = 0;
    printf("Enter the number:\n");
    scanf("%d", &iVal);
    iRet = Display(iVal);
    printf("Summation is: %d\n", iRet);
    printf("\n");
    return 0;
}