// accept number from user aand off the bit at given position
#include <stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT No, UINT pos)
{
    UINT mask = 0X00000001;
    mask = mask << (pos - 1);
    mask = ~mask;

    return (mask & No);
}
int main()
{
    UINT value = 0;
    UINT iRet = 0;
    UINT pos = 0;
    printf("Enter the number:\n");
    scanf("%d", &value);

    printf("Enter the position:\n");
    scanf("%d", &pos);

    iRet = OffBit(value, pos);

    printf("Updated number is:%d\n", iRet);

    return 0;
}