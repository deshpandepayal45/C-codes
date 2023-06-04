#include <stdio.h>

void Factorial(int No)
{
    int iCnt = 1;
    for (iCnt = 1; iCnt <= (No / 2); iCnt++)
    {
        if ((No % iCnt) == 0)
        {
            printf("%d\n", iCnt);
        }
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