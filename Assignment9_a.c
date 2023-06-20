/*Wap accept number from user and display below patterns
input:5
output:* * * * * # # # # #
 */

#include <stdio.h>
void printPattern(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 1;
    while (iCnt <= iNo)
    {
        printf("* ");
        iCnt++;
    }
    while (iCnt <= (iNo * 2))
    {
        printf("# ");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);
    printPattern(iValue);
    return 0;
}
