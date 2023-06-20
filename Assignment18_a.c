// accept n number from user and display following patternj
/*
5
A B C D E
*/

#include <stdio.h>
void display(int iNo)
{
    for (int iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%c\t", 'A' + iCnt);
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