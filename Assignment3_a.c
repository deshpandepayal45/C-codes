// Accept number from user and printf that number of even numbers
#include <stdio.h>
void printEvenNo(int iNo)
{
    int iCnt = 0;
    int iEven = 0;
    if (iNo <= 0)
    {
        printf(" ");
    }
    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        iEven += 2;
        printf("%d\t", iEven);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number :\n");
    scanf("%d", &iValue);
    printEvenNo(iValue);
    return 0;
}