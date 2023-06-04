// stack layout
#include <stdio.h>
void DisplayR(int no)
{
    static int iCnt = 1; // if we can not write static then it always intialie iCnt with 1
    if (iCnt <= no)
    {
        printf("*\t");
        iCnt++;
        DisplayR(no); // Recursive call
    }
}
int main()
{
    int value = 0;
    printf("Enter the number:\n");
    scanf("%d", &value);
    DisplayR(value);
    return 0;
}