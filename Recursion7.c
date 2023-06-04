#include <stdio.h>

int sumFactor(int No)
{
    static int iCnt = 1;
    static int iSum = 0;
    if (iCnt <= (No / 2))
    {
        if (No % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        sumFactor(No);
    }
    return iSum;
}
int main()
{
    int iRet = 0;
    int value = 0;
    printf("Enter the value:\n");
    scanf("%d", &value);

    iRet = sumFactor(value);
    printf("Summation of Factors is:%d\n", iRet);
    return 0;
}