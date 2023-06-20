/*
1 2 3 4
1 * * 4
1 * * 4
1 2 3 4
*/
#include <stdio.h>
void display(int iNo1, int iNo2)
{

    for (int iCnt = 1; iCnt <= iNo1; iCnt++)
    {

        for (int jCnt = 1; jCnt <= iNo2; jCnt++)
        {
            if (iCnt == 1 || iCnt == iNo1 || jCnt == 1 || jCnt == iNo2)
            {
                printf("%d ", jCnt);
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