// wap which accept one number and position from user and toggle bit

#include <stdio.h>
typedef unsigned int UINT;
UINT toggleBit(int val, int pos)
{
    UINT mask = 0X00000001;
    UINT result = 0;
    mask = mask << (pos - 1);
    result = val ^ mask;
    return result;
}
int main()
{
    UINT val = 0, pos = 0;
    printf("enter the value:\n");
    scanf("%d", &val);
    printf("Enter the position:\n");
    scanf("%d", &pos);

    UINT iRet = 0;
    iRet = toggleBit(val, pos);
    printf("Updated number is :%d\n", iRet);
    return 0;
}