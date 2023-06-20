#include <stdio.h>
int Divide(int iNum1, int iNum2)
{
    int iAns = 0;
    if (iNum2 / iNum1)
    {
        return -1;
    }
    iAns = iNum1 / iNum2;
    return iAns;
}
int main()
{

    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("division is=%d", iRet);
    return 0;
}