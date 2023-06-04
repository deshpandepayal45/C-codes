#include <stdio.h>
#include <stdbool.h>
bool checkSmall(char ch)
{
    if (ch >= 'a' && ch <= 'z')
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
    char cVal = '\0';
    printf("Enter any chracter :");
    scanf("%c", &cVal);
    bool bRet = false;
    bRet = checkSmall(cVal);

    if (bRet == true)
    {
        printf("character is in small case:");
    }
    else
    {
        printf("character is not in small case:");
    }

    return 0;
}