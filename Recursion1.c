#include <stdio.h>
void DisplayI()
{
    int iCnt = 1;
    while (iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
}
void DisplayR()
{
    int iCnt = 1;
    if (iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();
    }
}
int main()
{
    DisplayR();
    return 0;
}