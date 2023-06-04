#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleRange(UINT No, UINT start, UINT end)
{
    UINT mask1 = 0XFFFFFFFF, mask2 = 0XFFFFFFFF, mask = 0, Result = 0;

    mask1 = mask1 << (start - 1);
    mask2 = mask2 >> (32 - end);

    mask = mask1 & mask2;

    Result = No ^ mask;
    return Result;
}

int main()
{
    UINT value = 0;
    UINT i = 0, j = 0;
    UINT ret = 0;

    printf("please enter number:\n");
    scanf("%d", &value);

    printf("please enter staring bit position:\n");
    scanf("%d", &i);

    printf("please enter ending bit position:\n");
    scanf("%d", &j);

    ret = ToggleRange(value, i, j);
    printf("Updated number is:%d\n", ret);

    return 0;
}