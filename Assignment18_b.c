/*accept number from user and display below pattern*/
/* 4
4 # 3 # 2 # 1 #
*/
#include <stdio.h>
void display(int iNo)
{
    for (int iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d #\t", iCnt);
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