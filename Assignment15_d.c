/*Accept n numbers from user and return frequency of 11*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int check(int *Arr, int iSize)
{
    int iCnt = 0, iTemp = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            iTemp++;
        }
    }
    return iTemp;
}
int main()
{
    int iLen = 0;
    printf("Enter the number of elemts:");
    scanf("%d", &iLen);

    int *p = NULL;
    p = (int *)malloc(sizeof(int) * iLen);
    printf("Enter array elements:\n");
    for (int iCnt = 0; iCnt < iLen; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    int iRet = 0;
    iRet = check(p, iLen);

    printf("Frequency of 11 is :%d\n", iRet);

    return 0;
}