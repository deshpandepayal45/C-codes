/*
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
*/
#include <stdio.h>
void display(int iNo1, int iNo2)
{

    for (int iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        int no = iCnt;
        for (int jCnt = 1; jCnt <= iNo2; jCnt++)
        {
            printf("%d ", no++);
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