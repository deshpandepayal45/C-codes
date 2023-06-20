/*Accept n numbers from user and check wheather that number contains 11 or not*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool check(int *Arr, int iSize)
{
    int iCnt = 0, iTemp = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            iTemp = 1;
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

    bool bRet = false;
    bRet = check(p, iLen);
    if (bRet == true)
    {
        printf("11 is present:\n");
    }
    else
    {
        printf("11 is not present:\n");
    }
    return 0;
}