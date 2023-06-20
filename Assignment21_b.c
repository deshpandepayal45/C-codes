/*
2 4 6 8 10
1 3 5 7 9
2 4 6 8 10
1 3 5 7 9
*/
#include <stdio.h>
void display(int iNo1, int iNo2)
{

    for (int iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        int iNum1 = 1, iNum2 = 2;
        for (int jCnt = 1; jCnt <= iNo2; jCnt++)
        {
            if (iCnt % 2 == 0)
            {
                printf("%d ", iNum1);
                iNum1 = iNum1 + 2;
            }
            else
            {
                printf("%d ", iNum2);
                iNum2 = iNum2 + 2;
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