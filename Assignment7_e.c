// WAp which accept number from user and display 5 multiplies of it
#include <stdio.h>
void printMul(int iNo)
{
    int iCnt = 1;
    while (iCnt <= 5)

    {

        printf(" %d", iNo * iCnt);
        iCnt++;

        /* code */
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);
    printMul(iValue);
    return 0;
}