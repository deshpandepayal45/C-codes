/*accept character from user and check it is digit or not*/

#include <stdio.h>
#include <stdbool.h>
bool checkDigit(char c)
{
    if (c >= '0' && c <= '9')
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
    char ch = '\0';
    printf("enter the character:\n");
    scanf("%c", &ch);

    bool bRet = false;
    bRet = checkDigit(ch);
    if (bRet == true)
    {
        printf("Entered character is digit:\n");
    }
    else
    {
        printf("Entered character is not digit:\n");
    }

    return 0;
}