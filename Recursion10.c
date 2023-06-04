#include <stdio.h>
int CountDigits(int No)
{
    static int iCnt = 0;

    if (No != 0)
    {
        iCnt++;
        No = No / 10;
        CountDigits(No);
    }
    return iCnt;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are:%d\n", iRet);

    return 0;
}