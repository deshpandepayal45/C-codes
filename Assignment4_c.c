// Accept number from user and display all non factors
#include <stdio.h>
void displayFactors(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number :\n");
    scanf("%d", &iValue);
    displayFactors(iValue);
    return 0;
}