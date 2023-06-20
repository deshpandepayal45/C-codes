/*
a b c d e
1 2 3 4 5
a b c d e
1 2 3 4 5
*/

#include <stdio.h>
void display(int iNo1, int iNo2)
{

    for (int iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        int iNum1 = 1;
        char s = 'a';
        for (int jCnt = 1; jCnt <= iNo2; jCnt++)
        {
            if (iCnt % 2 == 0)
            {
                printf("%d ", iNum1++);
            }
            else
            {
                printf("%c ", s++);
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