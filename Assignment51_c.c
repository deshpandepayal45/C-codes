// wap which accept one number and position from user and On that bit

#include <stdio.h>
typedef unsigned int UINT;
UINT OnBit(UINT val, UINT pos)
{
    UINT mask = 0X00000001;
    UINT result = 0;
    mask = mask << (pos - 1);
    result = val | mask;
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
    iRet = OnBit(val, pos);
    printf("updated number is:%d\n", iRet);
    return 0;
}
