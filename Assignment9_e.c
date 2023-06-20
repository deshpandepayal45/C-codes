// diff betn even and odd fact

#include <stdio.h>
int evenFact(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int EiFact = 1, OiFact = 1;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            EiFact = EiFact * iCnt;
        }
        else
        {
            OiFact = OiFact * iCnt;
        }
    }
    return EiFact - OiFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);
    iRet = evenFact(iValue);
    printf("difference between even and odd factorials :%d", iRet);
    return 0;
}