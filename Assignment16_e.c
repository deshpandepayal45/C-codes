// accept n numbers from user and return product of all odd numbers

#include <stdio.h>
#include <stdlib.h>
int productOfOdd(int *Arr, int iSize)
{
    int iCnt = 0;
    int iMul = 1;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 2 != 0)
        {
            iMul = iMul * Arr[iCnt];
        }
    }
    return iMul;
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
    iRet = productOfOdd(ptr, iLen);
    printf("Product of odd numbers=%d\n", iRet);
    return 0;
}