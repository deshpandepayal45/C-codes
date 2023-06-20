/*Accept  n numbers from user and return the difference between largest and smallest number*/
#include <stdio.h>
#include <stdlib.h>
int diff(int *Arr, int iSize)
{
    int iMax = Arr[0], iMin = Arr[0], iCnt = 0;
    for (iCnt = 1; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMax - iMin;
}
int main()
{
    int iLen = 0;
    printf("enter the number of elements:\n");
    scanf("%d", &iLen);

    int *ptr = NULL;
    ptr = (int *)malloc(sizeof(int) * iLen);

    printf("Enter array elements:\n");
    for (int iCnt = 0; iCnt < iLen; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    int iRet = 0;
    iRet = diff(ptr, iLen);
    printf("difference between largest and smallest numbner=%d\n", iRet);
    return 0;
}