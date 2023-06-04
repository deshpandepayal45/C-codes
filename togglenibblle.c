// accept number from user and toggle alternate nibble
#include <stdio.h>

typedef unsigned int UINT;
// 0000 1111 0000 1111 0000 1111 0000 1111
// 0      F    0    F    0    F    0    F
// 0X0F0F0F0F
UINT toggleBit(int No)
{
    UINT mask = 0X0F0F0F0F;
    UINT iResult = 0;

    iResult = No ^ mask;

    return iResult;
}
int main()
{
    UINT value = 0;
    UINT iRet = 0;
    printf("Enter the number:\n");
    scanf("%d", &value);

    iRet = toggleBit(value);
    printf("Updated number is: %d\n", iRet);
    return 0;
}