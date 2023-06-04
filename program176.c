// accept number as well as accept range from user and off the bits from that range
//  accept number from user aand toggle the bit at given position
#include <stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT No, UINT pos1, UINT pos2)
{

    UINT imask = 0X00000000;
    UINT mask1 = 0XFFFFFFFF, mask2 = 0XFFFFFFFF;
    mask1 = mask1 << pos1 - 1;
    mask2 = mask2 >> 32 - pos2;
    imask = mask1 & mask2;
    return imask ^ No;
}
int main()
{
    UINT value = 0;
    UINT iRet = 0;
    UINT start = 0, end = 0;
    printf("Enter the number:\n");
    scanf("%d", &value);

    printf("Enter the range:\n");
    scanf("%d%d", &start, &end);

    iRet = OffBit(value, start, end);

    printf("Updated number is:%d\n", iRet);

    return 0;
}