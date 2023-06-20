/*accept character from user and check it is in small case or not*/
#include <stdio.h>
#include <stdbool.h>
bool checkAlphabet(char c)
{
    if (c >= 'a' && c <= 'z')
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
    bRet = checkAlphabet(ch);
    if (bRet == true)
    {
        printf("Entered character is in lower alphabet:\n");
    }
    else
    {
        printf("Entered character is not in lower alphabet:\n");
    }

    return 0;
}