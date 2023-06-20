// off 7th and 10th bit
#include <stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;
// 1111 1111 1111 1111 1111 1111 1111 1111
// 1111 1111 1111 1111 1111 1101 1011 1111
// fffffDBf

UINT OffBit(int iNum)
{
    UINT mask = 0XfffffDBf;
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