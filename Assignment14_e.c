// Accept n numbners from user and display multiplies of 11
#include <stdio.h>
#include <stdlib.h>
void displayMultiOf11(int *Arr, int iSize)
{
    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 11 == 0)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}
int main()
{
    int *p = NULL;
    int iLen = 0;
    printf("Enter the elemets you want ?\n");
    scanf("%d", &iLen);

    p = (int *)malloc(sizeof(int) * iLen);

    printf("Enter array elemts:\n");
    for (int iCnt = 0; iCnt < iLen; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Numbers which are divisbile by 11:\n")
        displayMultiOf11(p, iLen);
    return 0;
}