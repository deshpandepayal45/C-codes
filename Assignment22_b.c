/*
 * * * *
 * * * #
 * * # #
 * # # #
 */

#include <stdio.h>
void display(int iNo1, int iNo2)
{

    for (int iCnt = 1; iCnt <= iNo1; iCnt++)
    {

        for (int jCnt = 1; jCnt <= iNo2; jCnt++)
        {
            if (iCnt * jCnt >= iNo1 + iNo2)
            {
                printf("# ");
            }
            else
            {
                printf("* ");
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