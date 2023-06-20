// Accept 2 number from user and display first number in second number of times..
#include <stdio.h>
void Display(int iNum1, int iNum2)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNum2; iCnt++)
    {
        printf("%d\n", iNum1);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue1);

    printf("Enter frequency:\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}