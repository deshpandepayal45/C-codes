// write a recursive program which accept number from user and display its largest digit
#include <stdio.h>
int LargestDigit(int iNo)
{
    static int max = -1;
    int digit = 0;
    if (iNo != 0)
    {
        digit = iNo % 10;
        if (digit > max)
            max = digit;
        iNo = iNo / 10;
        LargestDigit(iNo);
    }
    return max;
}
int main()
{
    int iVal = 0;
    printf("Enter the value:\n");
    scanf("%d", &iVal);
    int iRet = 0;
    iRet = LargestDigit(iVal);
    printf("Largest digit is:%d\n", iRet);
    return 0;
}