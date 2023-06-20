// wap accept number from useer and display its table
//
#include <stdio.h>
void displayReverseTable(int iNo)
{
    int iCnt = 0;
    // int iNum = iNo;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 10; iCnt > 0; iCnt--)
    {
        printf("%d X %d : %d\n", iNo, iCnt, iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);
    displayReverseTable(iValue);
    return 0;
}