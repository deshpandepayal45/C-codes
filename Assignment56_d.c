// write a program which accept number from user and return its smallest digit
#include <stdio.h>
int LargestDigit(int iNo)
{
    static int min = 9;
    int digit = 0;
    if (iNo != 0)
    {
        digit = iNo % 10;
        if (digit < min)
            min = digit;
        iNo = iNo / 10;
        LargestDigit(iNo);
    }
    return min;
}
int main()
{
    int iVal = 0;
    printf("Enter the value:\n");
    scanf("%d", &iVal);
    int iRet = 0;
    iRet = LargestDigit(iVal);
    printf("Smallest digit is:%d\n", iRet);
    return 0;
}