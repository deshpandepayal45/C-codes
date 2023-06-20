// wap which accep one number from user and toggle 7th bit and 10th
#include <stdio.h>
typedef unsigned int UINT;
// 0000 0000 0000 0000 0000 0000 0000 0000
// 0000 0000 0000 0000 0000 0010 0100 0000
// 0X00000440
UINT toggleBit(int iNum)
{
    UINT mask = 0X00000240;
    UINT result = 0;
    result = iNum ^ mask;
    return result;
}
int main()
{
    UINT value = 0;
    printf("Enter value:\n");
    scanf("%d", &value);
    UINT iRet = 0;
    iRet = toggleBit(value);
    printf("updated value: %d ", iRet);
    return 0;
}