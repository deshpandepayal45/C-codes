// write a program which accept number from user and prints its numberline
#include <stdio.h>
void printNumLine(int iNo)
{
    int iCnt = iNo;
    iCnt = -iCnt;
    while (iCnt <= iNo)
    {
        printf("%d ", iCnt);
        iCnt++;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);
    printNumLine(iValue);
    return 0;
}