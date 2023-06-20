// wap to find even factorial

#include <stdio.h>
int evenFact(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 2; iCnt <= iNo; iCnt += 2)
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
    iRet = evenFact(iValue);
    printf("evem factorial is :%d", iRet);
    return 0;
}