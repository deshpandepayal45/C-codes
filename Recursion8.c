// check perfect
#include <stdio.h>
#include <stdbool.h>
bool checkPerfect(int No)
{
    static int iSum = 0;
    static int iCnt = 0;
    if (iCnt <= (No / 2))
    {
        if (No % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        checkPerfect(No);
    }
    if (iSum == No)
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
    int value = 0;
    bool bRet = false;
    printf("enter vallue:\n");
    scanf("%d", &value);
    bRet = checkPerfect(value);
    if (bRet == true)
    {
        printf("Given number is perfect:\n");
    }
    else
    {
        printf("Number is not perfect:\n");
    }
    return 0;
}