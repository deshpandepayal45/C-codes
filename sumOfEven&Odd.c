/*
accept n number from user and display summation of even as well as odd elements */

#include <stdio.h>
#include <stdlib.h>

void additionOfEvenOdd(int *Arr, int size)
{
    int iCnt = 0;
    int evenSum = 0;
    int oddSum = 0;
    for (iCnt = 0; iCnt < size; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            evenSum = evenSum + Arr[iCnt];
        }
        else
        {
            oddSum = oddSum + Arr[iCnt];
        }
    }
    printf("Even numbers Addition :%d \n", evenSum);
    printf("Odd numbers Addition :%d \n", oddSum);
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
    additionOfEvenOdd(ptr, iLength);
    free(ptr);
    return 0;
}