
/*write a program which accept the number from user and return the count of digits between 3 and 7*/
#include <stdio.h>
int countDigits(int iNo)
{
    int iRem = 0, iCount = 0;
    while (iNo != 0)
    {
        iRem = iNo % 10;
        if (iRem >= 3 && iRem <= 7)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}
int main()
{
    int iVal = 0;
    printf("Enter the number:\n");
    scanf("%d", &iVal);

    int iRet = 0;
    iRet = countDigits(iVal);
    printf("frequency of digits between 3 and 7 is:%d\n", iRet);
    return 0;
}