/*Accept the number from user and display even numbers between them*/
#include <stdio.h>
void displayEven(int iNo1, int iNo2)
{
    int iCnt = 0;
    printf("Even numbers between that range:");
    for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}
int main()
{
    int iStart = 0, iEnd = 0;
    printf("Enter the start and end value:\n");
    scanf("%d%d", &iStart, &iEnd);

    displayEven(iStart, iEnd);
    return 0;
}