// Accept the number from user and display its factors in decreasing order
#include <stdio.h>
void displayFactors(int iNo)
{
    int iCnt = 0;
    for (iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if (iNo % iCnt == 0)
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