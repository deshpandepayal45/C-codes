// accept number from user and count which bits are 1
#include <stdio.h>
int countOnBits(unsigned int No)
{
    int Digit = 0;
    int iCnt = 0;
    while (No != 0)
    {
        Digit = No % 2;
        if (Digit == 1)
        {
            iCnt++;
        }
        No = No / 2;
    }
    return iCnt;
}
int main()
{
    unsigned int value = 0;
    int iRet = 0;
    printf("enter the value:\n");
    scanf("%d", &value);

    iRet = countOnBits(value);
    printf("Number of bits which are ON aree:%d\n", iRet);
    return 0;
}