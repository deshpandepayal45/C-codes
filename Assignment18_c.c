// display below pattern
/*
5
1 * 2 * 3 * 4 * 5 *
*/
#include <stdio.h>
void display(int iNo)
{
    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d * ", iCnt);
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