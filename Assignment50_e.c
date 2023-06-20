// wap which accept one number from user and on its first 4 bits
#include <stdio.h>
typedef unsigned int UINT;
// 0000 0000 0000 0000 0000 0000 0000 0000
// 0000 0000 0000 0000 0000 0000 0000 1111
// 0X0000000F
UINT OnBit(UINT value)
{
    UINT mask = 0X0000000F;
    UINT result = 0;
    result = mask | value;
    return result;
}
int main()
{
    UINT val = 0;
    printf("Enter value:\n");
    scanf("%d", &val);
    UINT iret = 0;
    iret = OnBit(val);
    printf("Updated value:%d\n", iret);

    return 0;
}