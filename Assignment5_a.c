// Accept number from user and display its multiplication factors
#include <stdio.h>
int mulFactor(int iNo)
{
    int iCnt = 0;
    int iMul = 1;
    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            printf("*%d", iCnt);
            iMul = iMul * iCnt;
        }
    }
    return iMul;
}
int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);
    int iAns = 0;
    iAns = mulFactor(iValue);
    printf("\nmultiplication of factors are:%d\n", iAns);
    return 0;
}