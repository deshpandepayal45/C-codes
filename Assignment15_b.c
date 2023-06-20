/*Accept n numbners from user and return difference between frequency of even numbers and odd numbers */

#include <stdio.h>
#include <stdlib.h>
int frequency(int *Arr, int iSize)
{
    int iCnt = 0, iEvenCount = 0, iOddCount = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iEvenCount++;
        }
        else
        {
            iOddCount++;
        }
    }
    return iEvenCount - iOddCount;
}
int main()
{
    int iLen = 0;
    printf("Enter the number of elements :\n");
    scanf("%d", &iLen);

    int *p = NULL;
    p = (int *)malloc(sizeof(int) * iLen);
    printf("Enter the elements:\n");
    for (int iCnt = 0; iCnt < iLen; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    int iRet = 0;
    iRet = frequency(p, iLen);
    printf("Difference between frequencies: %d\n", iRet);
    free(p);
    return 0;
}