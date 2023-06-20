// WAP which accept number from user and display odd number till that number
#include <stdio.h>
void printOdd(int iNo)
{
    int iCnt = 1;
    while (iCnt <= iNo)

    {
        printf("%d ", iCnt);
        iCnt = iCnt + 2;
        /* code */
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);
    printOdd(iValue);
    return 0;
}