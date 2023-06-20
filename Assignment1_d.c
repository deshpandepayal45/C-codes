// Accept one number from user and check it is divisible by 5 or not.
#include <stdio.h>
typedef int BOOL;
#define TRUE 1;
#define FALSE 0;
BOOL Check(int iValue)
{
    if (iValue % 5 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{

    int iNum = 0;
    BOOL bRet = FALSE;
    printf("enter the number :\n");
    scanf("%d", &iNum);
    bRet = Check(iNum);
    if (bRet == 1)
    {
        printf("Number is divisible by 5 \n");
    }
    else
    {
        printf("Number is not divisible by 5 \n");
    }
    return 0;
}