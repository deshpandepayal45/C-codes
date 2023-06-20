/*write a Program which accept number from user and display the differenece
between summation of its even digits and sumation of its odd digit*/
#include <stdio.h>
int countDigits(int iNo)
{
    int iRem = 0, sOdd = 0, sEven = 0;
    while (iNo != 0)
    {
        iRem = iNo % 10;
        if (iRem % 2 == 0)
        {
            sEven += iRem;
        }
        else
        {
            sOdd += iRem;
        }
        iNo = iNo / 10;
    }
    return sEven - sOdd;
}
int main()
{
    int iVal = 0;
    printf("Enter the number:\n");
    scanf("%d", &iVal);

    int iRet = 0;
    iRet = countDigits(iVal);
    printf("differenece between summation of odd and even numbers :%d\n", iRet);
    return 0;
}