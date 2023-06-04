#include <stdio.h>
// 4
// 4+3+2+1=10
int Factorial(int No)
{
    static int sum = 1;
    static int iCnt = 1;
    if (iCnt <= No)
    {
        sum = sum * iCnt;
        iCnt++;
        Factorial(No);
    }
    return sum;
}
int main()
{
    int iRet = 0;
    int value = 0;
    printf("Enter the value:\n");
    scanf("%d", &value);
    iRet = Factorial(value);
    printf("Factorial is:%d\n", iRet);
    return 0;
}