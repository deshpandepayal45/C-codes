/*Accept  n numbers from user and return the smallest mnumber*/
#include <stdio.h>
#include <stdlib.h>
int smallestNum(int *Arr, int iSize)
{
    int iMin = Arr[0], iCnt = 0;
    for (iCnt = 1; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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
    iRet = smallestNum(ptr, iLen);
    printf("smallest number=%d\n", iRet);

    free(ptr);
    return 0;
}