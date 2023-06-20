// wap which accept 3 numbers and display multiplication iof them

#include <stdio.h>
int getMultiplication(int iNo1, int iNo2, int iNo3)
{
    int iAns = 0;
    iAns = iNo1 * iNo2 * iNo3;
    return iAns;
}
int main()
{
    int iVal1 = 0, iVal2 = 0, iVal3 = 0;
    printf("Enter three numbers :\n");
    scanf("%d%d%d", &iVal1, &iVal2, &iVal3);

    int iAns = 0;
    iAns = getMultiplication(iVal1, iVal2, iVal3);
    printf("Multiplication is: %d\n", iAns);
    return 0;
}