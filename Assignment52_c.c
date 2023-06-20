// wap which accept one number from user and check wheather 9th or 12th bit is on/off

#include <stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT val)
{
    UINT mask1 = 0X00000100;
    UINT mask2 = 0X00000400;

    if ((mask1 | val == val) || (mask2 | val == val))
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
    printf("Enter value:\n");
    scanf("%d", &val);
    bool bRet = false;
    bRet = CheckBit(val);
    if (bRet == true)
    {
        printf("bits are ON.\n");
    }
    else
    {
        printf("Bits are OFF\n");
    }
    return 0;
}
