// Accept one number from user and print that numbr of * on screen
#include <stdio.h>
void Accept(int iNum)
{
    int iCnt = 1;
    while (iCnt <= iNum)
    {
        printf("*\t");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;
    printf("enter the number:\n");
    scanf("%d", &iValue);
    Accept(iValue);
    return 0;
}