/*accept character from user and check it is specail symbol or not*/
#include <stdio.h>
#include <stdbool.h>
bool changeCase(char ch)
{
    if (ch >= '!' && ch <= '*')
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
    printf("Enter character:\n");
    scanf("%c", &ch);

    bool bRet = false;
    bRet = changeCase(ch);
    if (bRet == true)
    {
        printf("Entered character is special symbol\n");
    }
    else
    {
        printf("Entered character is not special symbol\n");
    }
    return 0;
}