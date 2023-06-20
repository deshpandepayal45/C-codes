/*
A A A A A
B B B B B
C C C C C
*/
#include <stdio.h>
void display(int iNo1, int iNo2)
{
    for (int iCnt = 0; iCnt < iNo1; iCnt++)
    {
        for (int jCnt = 1; jCnt <= iNo2; jCnt++)
        {

            printf(" %c ", 'A' + (iCnt));
        }
        printf("\n");
    }
}
int main()
{
    int iRow = 0, iCol = 0;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d", &iRow, &iCol);

    display(iRow, iCol);
    return 0;
}