/*Accept n numbers from user and accept one another number as No
check wheather No is present or not*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool check(int *Arr, int iSize, int iNo)
{
    int iCnt = 0, iTemp = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iTemp = 1;
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
    printf("Enter array elements:\n");

    if(p==NULL){
        printf("Unable to allocate memory\n");
    }
    for (int iCnt = 0; iCnt < iLen; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }
    printf("Enter the number:\n");
    scanf("%d", &iNo);


    bool bRet = false;
    bRet = check(p, iLen, iNo);
    if (bRet == true)
    {
        printf("%d is present:\n", iNo);
    }
    else
    {
        printf("%d is not present:\n", iNo);
    }
    free(p);
    return 0;
}