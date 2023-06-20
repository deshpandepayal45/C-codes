// toggle 7th bit of that number

#include <stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;
// 0000 0000 0000 0000 0000 0000 0000 0000
// 0000 0000 0000 0000 0000 0000 0100 0000
// ffffffBf
UINT toggleBit(int iNum)
{
    UINT mask = 0X00000040;
    UINT result = 0;
    result = iNum ^ mask;
    return result;
}
int main()
{
    UINT Value = 0;
    printf("enter the value:\n");
    scanf("%d", &Value);

    UINT iRet = 0;
    iRet = toggleBit(Value);
    printf("Updataed value is: %d\n", iRet);
}