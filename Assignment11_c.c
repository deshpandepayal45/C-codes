/*Write a program which accepts range from user and return
its addition of all numbers between that range*/

#include <stdio.h>
int displayEven(int iNo1, int iNo2)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        iSum += iCnt;
    }
    return iSum;
}
int main()
{
    int iStart = 0, iEnd = 0;
    printf("Enter the start and end value:\n");
    scanf("%d%d", &iStart, &iEnd);

    int iRet = 0;
    iRet = displayEven(iStart, iEnd);
    printf("Addition of numbers between given range:%d\n", iRet);
    return 0;
}