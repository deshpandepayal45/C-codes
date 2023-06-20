// wap which checks wheather 7th,15th,21st,
// 28th bit is on or off
// 0000 0000 0000 0000 0000 0000 0000 0000
//     1000 0001      0100      0100
// 0X08104040
#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool checkBit(int Value)
{
    UINT mask = 0X08104040;
    UINT iResult = 0;

    iResult = mask & Value;
    if (iResult == mask)
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
    UINT value = 0;
    printf("Enter the number:\n");
    scanf("%d", &value);

    bool bRet = false;
    bRet = checkBit(value);
    if (bRet == true)
    {
        printf("Bits are onn\n");
    }
    else
    {
        printf("Bits are off\n");
    }
    return 0;
}