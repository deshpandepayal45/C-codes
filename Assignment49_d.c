// wap which check 7th,8th ,9th bit
// is on or off
#include <stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;
// 0000 0000 0000 0000 0000 0000 0000 0000
//                          0001 1100
// 0X000001C0
bool checkBit(int no)
{
    UINT iMask = 0X000001C0;
    UINT iResult = 0;

    iResult = iMask & no;
    if (iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UINT Value = 0;
    printf("enter the value:\n");
    scanf("%d", &Value);

    bool bRet = false;
    bRet = checkBit(Value);

    if (bRet == true)
    {
        printf("Bits are On\n");
    }
    else
    {
        printf("Bits are off\n");
    }
    return 0;
}