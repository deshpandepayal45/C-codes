/*Accept N numbers from user and accept one another number as NO
,and return frequency of No from it*/
/*Accept n numbers from user and check wheather that number contains 11 or not*/

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
            iTemp++;
        }
    }
    return iTemp;
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
        printf("Unable to allocate memory\n");
    }
    printf("Enter array elements:\n");
    for (int iCnt = 0; iCnt < iLen; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Enter the number:\n");
    scanf("%d", &iNo);

    int iRet = false;
    iRet = check(p, iLen, iNo);
    printf("Frequency of %d is %d:\n", iNo, iRet);
    free(p);
    return 0;
}