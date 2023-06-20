// wap which accept one number from user and toggle contents of first bit and last bit nibble
#include <stdio.h>
typedef unsigned int UINT;
UINT toggleBit(UINT val)
{
    UINT mask = 0XF000000F, result = 0;

    result = val ^ mask;
    return result;
}
int main()
{
    UINT val = 0;
    printf("Enter the value:\n");
    scanf("%d", &val);

    UINT iRet = 0;
    iRet = toggleBit(val);
    printf("Updated value is:%d\n", iRet);
    return 0;
}