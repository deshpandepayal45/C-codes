// wap to find odd factorial of given number

#include <stdio.h>
int oddFact(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iFact = 1;
    for (iCnt = 1; iCnt <= iNo; iCnt += 2)
    {

        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);
    iRet = oddFact(iValue);
    printf("odd factorial is :%d", iRet);
    return 0;
}