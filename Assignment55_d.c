// write a program which accept number from user and return its factorial
// input:5
// output:120
#include <stdio.h>
int findFact(int iVal)
{
    static int fact = 1;
    if (iVal >= 1)
    {
        fact = fact * iVal;
        iVal--;
        findFact(iVal);
    }
    return fact;
}
int main()
{
    int iVal = 0;
    printf("Enter the number:\n");
    scanf("%d", &iVal);
    int iRet = 0;
    iRet = findFact(iVal);
    printf("Factorial of number is:%d\n", iRet);
    return 0;
}