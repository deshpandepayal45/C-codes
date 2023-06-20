// wap which accept one number and position from user and check wheather bit at that posi
// is on or off.If bit is on return true otherwise return false;

#include <stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;
bool CheckBit(int value, int pos)
{
    UINT mask = 0X00000001;
    UINT result = 0;
    mask = mask << (pos - 1);
    result = mask & value;
    if (result == mask)
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
    UINT pos = 0;
    printf("Enter value:\n");
    scanf("%d", &val);
    printf("Enter the position:\n");
    scanf("%d", &pos);
    bool bRet = false;
    bRet = CheckBit(val, pos);
    if (bRet == true)
    {
        printf("bit is ON.\n");
    }
    else
    {
        printf("bit is Off.\n");
    }
    return 0;
}