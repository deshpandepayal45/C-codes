/*Accept N number from user and dispay all such elements which are even and divisible by 5*/
#include <stdio.h>
#include <stdlib.h>
void divisibleByFive(int *Arr, int iSize)
{
    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 5 == 0 && Arr[iCnt] % 2 == 0)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}
int main()
{
    int *p = NULL;
    int iLen = 0;
    printf("Enter the number of elements:\n");
    scanf("%d", &iLen);

    p = (int *)malloc(sizeof(int) * iLen);

    printf("Enter the elements:\n");
    for (int iCnt = 0; iCnt < iLen; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Number's which are divisible by 5\n");
    divisibleByFive(p, iLen);
    return 0;
}