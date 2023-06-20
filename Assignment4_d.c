// Accept number from user displau summation of all non factors numbers
#include <stdio.h>
int displayFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iAns = 0;
    printf("Enter the number :\n");
    scanf("%d", &iValue);
    iAns = displayFactors(iValue);
    printf("Summation of non factors is :%d\n", iAns);
    return 0;
}