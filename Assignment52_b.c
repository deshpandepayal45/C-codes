// wap which accept 2 no from user and display position
// of common ON bits from that two numbers
#include <stdio.h>
typedef unsigned int UINT;
void countOnBits(UINT val1, UINT val2)
{
    UINT mask1 = 0X00000001;

    for (int i = 0; i < 32; i++)
    {
        if ((val1 & mask1) == mask1 && (val2 & mask1) == mask1)
        {
            printf("%d ", i + 1);
        }
        mask1 = mask1 << 1;
    }
}
int main()
{
    UINT val1 = 0, val2 = 0;
    printf("Enter value:\n");
    scanf("%d", &val1);
    printf("Enter value:\n");
    scanf("%d", &val2);

    countOnBits(val1, val2);
    // printf("Number of On bits:%d\n", iRet);
    return 0;
}