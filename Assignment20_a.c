/*
A B C D
A B C D
A B C D
A B C D
*/
#include <stdio.h>
void display(int iNo1, int iNo2)
{
    for (int iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        for (int jCnt = 0; jCnt < iNo2; jCnt++)
        {
            printf(" %C ", 'A' + jCnt);
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