#include <stdio.h>
int display(int Arr[], int iSize)
{
    static int iCnt = 0;
    static int iSum = 0;
    if (iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;

        display(Arr, iSize);
    }
    return iSum;
}

int main()
{
    int Arr[5] = {10, 20, 30, 40, 50};

    int iRet = 0;
    iRet = display(Arr, 5);
    printf("Summation of array elements:%d\n", iRet);
    return 0;
}