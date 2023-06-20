// Accept number from user an display difference between summation of factor and non factor of that number// Accept number from user displau summation of all non factors numbers
#include <stdio.h>
int displayFactorsSum(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int displayNonFactorsSum(int iNo)
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
    int iAnsOfNonFactors = 0;
    int iAnsOfFactors = 0;
    printf("Enter the number :\n");
    scanf("%d", &iValue);
    iAnsOfNonFactors = displayNonFactorsSum(iValue);
    iAnsOfFactors = displayFactorsSum(iValue);
    int iAns = 0;
    iAns = iAnsOfFactors - iAnsOfNonFactors;
    printf("Difference of non factors and ffactor of value is :%d\n", iAns);
    return 0;
}