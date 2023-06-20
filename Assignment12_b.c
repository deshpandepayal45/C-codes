/*write a program which accept number from user and check it contains 0 or not*/
#include <stdio.h>
#include <stdbool.h>
bool checkZero(int iNo)
{
    int iRem = 0, iTemp = 0;
    while (iNo != 0)
    {
        iRem = iNo % 10;
        if (iRem == 0)
        {
            iTemp = 1;
        }
        iNo = iNo / 10;
    }
    if (iTemp == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iVal = 0;
    printf("Enter any number :\n");
    scanf("%d", &iVal);

    bool bRet = false;
    bRet = checkZero(iVal);
    if (bRet == true)
    {
        printf("Number contains 0");
    }
    else
    {
        printf("number not contain 0");
    }
    return 0;
}