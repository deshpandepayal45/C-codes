/*Accept  n numbers from user and return the largest mnumber*/
#include <stdio.h>
#include <stdlib.h>
int largestNum(int *Arr, int iSize)
{
    int iMax = Arr[0], iCnt = 0;
    for (iCnt = 1; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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
    iRet = largestNum(ptr, iLen);
    printf("Largest number=%d\n", iRet);

    free(ptr);
    return 0;
}