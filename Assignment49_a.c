// write a program which check wheather 15 bit is on or off
#include <stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;
// 0000 0000 0000 0000 0100 0000 0000 0000
// 0     0   0    0     4     0   0      0
// 0X00001000
bool checkBit(UINT iNum)
{
    UINT mask = 0X00004000;
    UINT result = 0;
    result = iNum & mask;
    return result & mask;
}
int main()
{
    UINT Value = 0;
    printf("Enter the number:\n");
    scanf("%d", &Value);

    bool bRet = false;
    bRet = checkBit(Value);

    if (bRet == true)
    {
        printf("15 th bit is ON\n");
    }
    else
    {
        printf("15 th bit is OFF\n");
    }

    return 0;
}