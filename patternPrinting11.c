/*

* * * *
2 2 2 2
* * * *
4 4 4 4
*/
#include <stdio.h>
void display(int iNo1, int iNo2)
{
    for (int i = 1; i <= iNo1; i++)
    {
        for (int j = 1; j <= iNo2; j++)
        {
            if (i % 2 == 0)
            {
                printf("\t %d", i);
            }
            else
            {
                printf("\t *");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iVal1 = 0, iVal2 = 0;
    printf("Enter the number of rows:\n");
    scanf("%d", &iVal1);

    printf("Enter the number of Columns:\n");
    scanf("%d", &iVal2);
    display(iVal1, iVal2);
    return 0;
}