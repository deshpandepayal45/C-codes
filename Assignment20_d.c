/*
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1
*/
#include <stdio.h>
void display(int iNo1, int iNo2)
{
    for (int iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        for (int jCnt = 1; jCnt <= iNo2; jCnt++)
        {
            if (iCnt % 2 == 0)
            {
                printf(" %d ", (iCnt));
            }
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