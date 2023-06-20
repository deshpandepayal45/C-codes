// write a program which accept number from user and prints number till that number
#include <stdio.h>
void printNum(int iNo)
{
    int iCnt = 0;
    while (iCnt <= iNo)

    {
        printf(" %d", iCnt);
        iCnt++;
        /* code */
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);
    printNum(iValue);
    return 0;
}