// write a program which accept number from user and return its recursive number
#include <stdio.h>
int RecursiveNum(int no)
{
    static int iNum = 0;
    int digit = 0;
    if (no != 0)
    {
        digit = no % 10;
        iNum = iNum * 10 + digit;
        no = no / 10;
        RecursiveNum(no);
    }
    return iNum;
}
int main()
{
    int iVal = 0;
    printf("Enter the number:\n");
    scanf("%d", &iVal);
    int iRet = 0;
    iRet = RecursiveNum(iVal);
    printf("Recursive number is:%d\n", iRet);
    return 0;
}