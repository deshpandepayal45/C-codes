/*
A B C D
a b c d
A B C D
a b c d
*/
#include <stdio.h>
void display(int iNo1, int iNo2)
{
    for (int iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        for (int jCnt = 0; jCnt < iNo2; jCnt++)
        {
            if (iCnt % 2 == 0)
            {
                printf(" %c ", 'a' + (jCnt));
            }
            else
            {
                printf(" %c ", 'A' + (jCnt));
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