#include <stdio.h>
void printSymbol(int iNo)
{
    while (iNo != 0)
    {
        printf("$ * ");
        iNo--;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);
    printSymbol(iValue);
    return 0;
}