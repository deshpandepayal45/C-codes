// write a program which accept number from user and return its product of digits
#include <stdio.h>
int product(int iVal)
{
    static int iProduct = 1;
    int iDigit = 0;
    if (iVal != 0)
    {
        iDigit = iVal % 10;
        iProduct = iProduct * iDigit;
        iVal = iVal / 10;
        product(iVal);
    }
    return iProduct;
}
int main()
{
    int iVal = 0;
    printf("Enter the value:\n");
    scanf("%d", &iVal);
    int iRet = 0;
    iRet = product(iVal);
    printf("Products of digiits is:%d\n", iRet);
    return 0;
}