// wap accept one number and rage and toggle all bits from that range
#include <stdio.h>
typedef unsigned int UINT;
UINT toggleBitRange(UINT val, UINT start, UINT end)
{
    UINT mask = 0X00000000;
    UINT mask1 = 0XFFFFFFFF, mask2 = 0XFFFFFFFF;
    mask1 = mask << start - 1;
    mask2 = mask >> 32 - end;
    mask = mask1 & mask2;
    return mask ^ val;
}
int main()
{
    UINT val = 0, start = 0, end = 0;
    printf("Enter value:\n");
    scanf("%d", &val);
    printf("enter start and end positions:\n");
    scanf("%d%d", &start, &end);

    UINT iRet = 0;
    iRet = toggleBitRange(val, start, end);
    printf("Updated value is:%d\n", iRet);
    return 0;
}