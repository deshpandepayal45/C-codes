/*
accept n number from user and count even numbers from them */

#include <stdio.h>
#include <stdlib.h>
int countEven(int *Arr, int size)
{
    int iCnt = 0;
    int evenCnt = 0;
    for (iCnt = 0; iCnt < size; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            evenCnt++;
        }
    }
    return evenCnt;
}
int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    printf("Enter the size of array:\n");
    scanf("%d", &iLength);

    int *ptr = NULL;
    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter array elements :\n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = countEven(ptr, iLength);
    printf("number of even elements are:%d\n", iRet);
    free(ptr);
    return 0;
}