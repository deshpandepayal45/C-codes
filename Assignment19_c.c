/*
3 5
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/
#include <stdio.h>
void display(int iNo1, int iNo2)
{
    for (int iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        for (int jCnt = iNo2; jCnt >= 1; jCnt--)
        {
            printf("%d ", jCnt);
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