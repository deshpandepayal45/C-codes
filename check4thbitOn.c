// accept number from user and count which bits are 1
#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;
bool checkBit(UINT No)
{
    UINT iMask = 8;
    UINT iResult = 0;

    iResult = No & iMask;

    if (iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UINT value = 0;
    int iRet = 0;
    bool bRet = false;
    printf("enter the value:\n");
    scanf("%d", &value);
    bRet = checkBit(value);
    if (bRet == true)
    {
        printf("4th bit is on:\n");
    }
    else
    {
        printf("4th bit is off:\n");
    }
    return 0;
}