// accept number from user and count which bits are 1
#include <stdio.h>

typedef unsigned int UINT;
int countOnBits(UINT No)
{
    int Digit = 0;
    int iCnt = 0;
    while (No != 0)
    {
        Digit = No % if (Digit == 1)
        {
            iCnt++;
        }
        2;
        iCnt = iCnt + Digit;
        No = No / 2;
    }
    return iCnt;
}
int main()
{
    UINT value = 0;
    int iRet = 0;
    printf("enter the value:\n");
    scanf("%d", &value);

    iRet = countOnBits(value);
    printf("Number of bits which are ON aree:%d\n", iRet);
    return 0;
}