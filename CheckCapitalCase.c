#include <stdio.h>
#include <stdbool.h>
bool checkCapital(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
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
    bRet = checkCapital(cVal);

    if (bRet == true)
    {
        printf("character is in capital case:");
    }
    else
    {
        printf("character is not in capital case:");
    }

    return 0;
}