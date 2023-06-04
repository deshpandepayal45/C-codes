
/*
 *
 * *
 * * *
 * * * *
 */

#include <stdio.h>
void display(int iNo1, int iNo2)
{

    for (int i = 1; i <= iNo1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("\t *");
        }
        printf("\n\n");
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