/*Accept n numbers from user and display difference between summation of odd and even numbers*/

#include <stdio.h>
#include <stdlib.h>
int checkDiff(int Arr[], int iLen)
{
    int iCnt = 0, ECount = 0, oCount = 0;
    for (iCnt = 0; iCnt < iLen; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            ECount++;
        }
        else
        {
            oCount++;
        }
    }
    return ECount - oCount;
}
int main()
{
    int iNo = 0;
    printf("Enter the number of elemets you want?");
    scanf("%d", &iNo);
    int *p = NULL;
    p = (int *)malloc(sizeof(int) * iNo);

    int iCnt = 0;
    printf("Enter element:\n");
    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    int iRet = 0;
    iRet = checkDiff(p, iNo);
    printf("Difference between summation of odd and even numbers:%d\n", iRet);
    free(p);
    return 0;
}