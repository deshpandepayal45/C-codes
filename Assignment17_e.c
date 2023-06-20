/*accept  n numebrs from user and display summation of each digit in number*/

#include <stdio.h>
#include <stdlib.h>
void display(int *Arr, int iSize)
{
    int iCnt = 0, iRem = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        int temp = Arr[iCnt], iSum = 0;
        while (temp != 0)
        {
            iRem = temp % 10;
            iSum = iSum + iRem;
            temp = temp / 10;
        }
        printf("%d\t", iSum);
    }
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

    display(ptr, iLen);

    free(ptr);
    return 0;
}