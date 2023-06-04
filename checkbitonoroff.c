// accept number as well as position from user and check bit is on or off.
#include <stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;

bool checkBit(UINT no, UINT pos1, UINT pos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iMask;
    UINT iResult = 0;
    if ((pos1 < 1) || (pos1 > 32) || (pos2 < 1) || (pos2 > 32))
    {
        printf("Invalid position,It should be in between 1 to 32.\n");
        return false;
    }
    iMask1 = (iMask1 << (pos1 - 1));
    iMask2 = (iMask2 << (pos2 - 1));
    iMask = iMask1 | iMask2;
    // dynamic mask formation
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
    UINT value = 0;
    UINT position1 = 0, position2 = 0;
    bool bRet = false;

    printf("Enter number:\n");
    scanf("%d", &value);

    printf("Enter the position of bit:\n");
    scanf("%d", &position1);

    printf("Enter the position of bit:\n");
    scanf("%d", &position2);

    bRet = checkBit(value, position1, position2);
    if (bRet == true)
    {
        printf("%d and %d th position bit is on:\n", position1, position2);
    }
    else
    {
        printf("%d and %d th position bit is off:\n", position1, position2);
    }

    return 0;
}