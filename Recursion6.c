#include <stdio.h>

void Factorial(int No)
{
    static int iCnt = 1;
    if (iCnt <= (No / 2))
    {
        if (No % iCnt == 0)
        {
            printf("%d\n", iCnt);
        }
        iCnt++;
        Factorial(No);
    }
}
int main()
{
    int iRet = 0;
    int value = 0;
    printf("Enter the value:\n");
    scanf("%d", &value);
    Factorial(value);
    // printf("Factorial is:%d\n", iRet);
    return 0;
}