// Accept one number and position from user and of that bit
#include <stdio.h>
typedef unsigned int UINT;
// 0000 0000 0000 0000 0000 0000 0000 0000
// 0000 0000 0000 0000 0000 0000 0000 0000
UINT OffBit(UINT val, UINT pos)
{
    UINT mask = 0XFFFFFFE;
    UINT result = 0;
    mask = mask << (pos - 1);
    result = mask & val;
    return result;
}
int main()
{
    UINT val = 0, pos = 0;
    printf("Enter the value:\n");
    scanf("%d", &val);
    printf("Enter the position:\n");
    scanf("%d", &pos);
    UINT iRet = 0;
    iRet = OffBit(val, pos);
    printf("Updated value is:%d\n", iRet);
    return 0;
}