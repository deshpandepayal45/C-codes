// Check factorail number

#include <stdio.h>
//#include <stdbool.h>
int checkFact(int iNo)
{
    int iMul = 1, iCnt = 1;

    while (iCnt <= iNo)
    {
        iMul = iMul * iCnt;
        iCnt++;
        /* code */
    }
    return iMul;
}
int main()
{
    int iValue = 0;
    int iAns = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);
    iAns = checkFact(iValue);
    printf("Factorial is:%d\n", iAns);
    return 0;
}