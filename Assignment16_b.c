/*Accept N numbers from user and accept one anotheth number as no,
return indexn of first occurances of that number*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int check(int *Arr, int iSize, int iNo)
{
    int iCnt = 0, iTemp = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            break;
        }
    }

    return iCnt;
}
int main()
{
    int iLen = 0, iNo = 0;
    printf("Enter the number of elemts:");
    scanf("%d", &iLen);

    int *p = NULL;
    p = (int *)malloc(sizeof(int) * iLen);
    if (p == NULL)
    {
        printf("Unable to allocate memory");
    }
    printf("Enter array elements:\n");
    for (int iCnt = 0; iCnt < iLen; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Enter the number:");
    scanf("%d", &iNo);

    int iRet = 0;
    iRet = check(p, iLen, iNo);
    if (iRet == -1)
    {
        printf("No is not present:\n");
    }
    else
    {
        printf("index of first occurances of %d is %d\n", iNo, iRet);
    }
    free(p);
    return 0;
}