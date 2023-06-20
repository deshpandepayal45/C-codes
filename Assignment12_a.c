/*write a Program which accept number from user and display its digits in reverse order*/

#include <stdio.h>
void displayDigit(int iNo)
{
    int iRem = 0;
    while (iNo != 0)
    {
        iRem = iNo % 10;
        printf("%d\t", iRem);
        iNo = iNo / 10;
    }
}
int main()
{
    int iVal = 0;
    printf("Enter the number:\n");
    scanf("%d", &iVal);

    displayDigit(iVal);
    return 0;
}