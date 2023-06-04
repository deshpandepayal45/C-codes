#include <stdio.h>
int CountDigits(int No)
{
    static int iSum = 0;
    int iDigit = 0;
    if (No != 0)
    {
        iDigit = No % 10;
        iSum = iSum + iDigit;
        No = No / 10;
        CountDigits(No);
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);

    printf("Summation of digits are:%d\n", iRet);

    return 0;
}