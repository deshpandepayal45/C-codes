// accept numver and off 4 bit
#include <stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;
// 0 0 0 0 1 0 0 0
// 1 1 1 1 0 1 1 1
// perform anding
// 0 0 0 0 0 0 0 0
UINT Togglebit(UINT no)
{
    UINT iMask = 0X00000070;
    UINT result = 0;
    result = no ^ iMask;
    return result;
}
int main()
{
    UINT val = 0;
    printf("Enter the value:\n");
    scanf("%d", &val);
    UINT bRet = false;
    bRet = Togglebit(val);
    printf("Updated number is:%d", bRet);
    return 0;
}