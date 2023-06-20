// accept one number from user and count how many bits are on
#include <stdio.h>
typedef unsigned int UINT;
UINT countOnBits(UINT val)
{
    UINT count = 0;
    UINT mask = 0X00000001;
    for (int i = 0; i < 32; i++)
    {
        if ((val & mask) == mask)
        {
            count++;
        }
        mask = mask << 1;
    }
    return count;
}
int main()
{
    UINT val = 0;
    printf("Enter value:\n");
    scanf("%d", &val);
    UINT iRet = 0;
    iRet = countOnBits(val);
    printf("Number of On bits:%d\n", iRet);
    return 0;
}