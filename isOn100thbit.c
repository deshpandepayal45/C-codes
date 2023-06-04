// accept number from user check 100th bit is on or off
#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool checkOn(UINT no)
{
    UINT iMask = 512;
    UINT iResult = 0;

    iResult = iMask & no;
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
    UINT val = 0;
    printf("Enter the value:\n");
    scanf("%d", &val);
    bool bRet = false;
    bRet = checkOn(val);
    if (bRet == true)
    {
        printf("10th bit is on:\n");
    }
    else
    {
        printf("10th bit is off:\n");
    }
    return 0;
}