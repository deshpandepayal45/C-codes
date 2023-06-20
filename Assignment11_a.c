// write a program which accept range from user and display all numbers between that range
#include <stdio.h>
void printRange(int iStart, int iEnd)
{
    int iCnt = 0;
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("\t%d", iCnt);
    }
}
int main()
{
    int iStart = 0, iEnd = 0;
    printf("Enter starting and end value :\n");
    scanf("%d%d", &iStart, &iEnd);

    printRange(iStart, iEnd);
    return 0;
}