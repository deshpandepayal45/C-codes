// wap which accept one number from user and off 7th bit of that number number
// if it is on.Return modified number

#include <stdio.h>
#include <stdbool.h>
// 1111 1111 1111 1111 1111 1111 1111 1111
// f      f     f   f    f     f 1011 f
// ffffffBf
typedef unsigned int UINT;
UINT OffBit(int iNum)
{
    UINT mask = 0XffffffBf;
    UINT result = 0;
    result = mask & iNum;
    return result;
}

int main()
{
    UINT Value = 0;
    printf("enter the value:\n");
    scanf("%d", &Value);

    UINT iRet = 0;
    iRet = OffBit(Value);
    printf("Updataed value is: %d\n", iRet);
}