/*write a program which accept number from user and count the frequency of odd numbers*/
#include <stdio.h>
int countFrequency(int iNo)
{
    int iRem = 0, iCount = 0;
    while (iNo != 0)
    {
        iRem = iNo % 10;
        if (iRem % 2 != 0)
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
    iRet = countFrequency(iVal);
    printf("Frequency of the odd digits:%d\n", iRet);
    return 0;
}