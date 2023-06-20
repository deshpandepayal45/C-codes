/*accept amount is us dollar and return its currency indian rupees
consider 1$=70rs */

#include <stdio.h>
int dollarToInr(int iNo)
{
    return iNo * 70;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);
    iRet = dollarToInr(iValue);
    printf("Dollar to rupees is :%d", iRet);
    return 0;
}