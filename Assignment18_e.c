// display
/*
8
2 4 6 8 10 12 14 16
*/

#include <stdio.h>
void display(int iNo)
{
    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", 2 * iCnt);
    }
}
int main()
{
    int iNum = 0;
    printf("Enter the numbeer:\n");
    scanf("%d", &iNum);

    display(iNum);
    return 0;
}