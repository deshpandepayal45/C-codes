// wap which accept two numbers from user and check they are equal or not
#include <stdio.h>
#include <stdbool.h>
bool checkEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
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
    int iVal1 = 0, iVal2 = 0;
    printf("Enter both numbers :\n");
    scanf("%d\t%d", &iVal1, &iVal2);

    bool bAns = false;
    bAns = checkEqual(iVal1, iVal2);
    if (bAns == true)
    {
        printf("Equal numbers");
    }
    else
    {
        printf("Not equal numbers");
    }
    return 0;
}