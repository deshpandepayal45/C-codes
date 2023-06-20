/*Write the program which accept range from user and
display all numbers in reverse order*/

#include <stdio.h>
void reverseDisplay(int iNo1, int iNo2)
{
    int iCnt = 0;
    for (iCnt = iNo2; iCnt >= iNo1; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}
int main()
{
    int iStart = 0, iEnd = 0;
    printf("Enter range ::\n");
    scanf("%d%d", &iStart, &iEnd);

    reverseDisplay(iStart, iEnd);
    return 0;
}