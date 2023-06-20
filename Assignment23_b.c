/*Accept character from user and check it is capital or not*/

#include <stdio.h>
#include <stdbool.h>
bool checkAlphabet(char c)
{
    if (c >= 'A' && c <= 'Z')
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
        printf("Entered character is in Upper alphabet:\n");
    }
    else
    {
        printf("Entered character is in lower alphabet:\n");
    }

    return 0;
}