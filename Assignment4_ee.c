
#include <stdio.h>
int displayFactors(int iNo)
{
    int iCnt = 0;
    int iNonFactorsSum = 0;
    int iFactorsSum = 0;
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iNonFactorsSum = iNonFactorsSum + iCnt;
        }
    }
    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iFactorsSum = iFactorsSum + iCnt;
        }
    }

    return iFactorsSum - iNonFactorsSum;
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