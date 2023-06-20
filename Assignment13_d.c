
/*write a program which accept the number from user and return multiplication of all digits*/
#include <stdio.h>
int countDigits(int iNo)
{
    int iRem = 0, iMul = 1;
    while (iNo != 0)
    {
        iRem = iNo % 10;
        iMul *= iRem;
        iNo = iNo / 10;
    }
    return iMul;
}
int main()
{
    int iVal = 0;
    printf("Enter the number:\n");
    scanf("%d", &iVal);

    int iRet = 0;
    iRet = countDigits(iVal);
    printf("Multiplication of all digits :%d\n", iRet);
    return 0;
}