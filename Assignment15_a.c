/*Accept n numbers from user and return frequency of even numbers*/

#include <stdio.h>
#include <stdlib.h>
int frequencyOfEven(int *Arr, int iSize)
{
    int iCnt = 0, iEvenCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}
int main()
{
    int iLen = 0;
    printf("Enter the number of elements:\n");
    scanf("%d", &iLen);

    int *p = NULL;
    p = (int *)malloc(sizeof(int) * iLen);
    printf("enter the array elements:\n");
    for (int iCnt = 0; iCnt < iLen; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    int iRet = 0;
    iRet = frequencyOfEven(p, iLen);
    printf("Frequency of even count :%d", iRet);
    return 0;
}