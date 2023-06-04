#include <stdio.h>
// 4
// 4+3+2+1=10
int Addition(int No)
{
    static int sum = 0;
    static int iCnt = 1;
    if (iCnt <= No)
    {
        sum = sum + iCnt;
        iCnt++;
        Addition(No);
    }
    return sum;
}
int main()
{
    int iRet = 0;
    int value = 0;
    printf("Enter the value:\n");
    scanf("%d", &value);
    iRet = Addition(value);
    printf("Addition is:%d\n", iRet);
    return 0;
}