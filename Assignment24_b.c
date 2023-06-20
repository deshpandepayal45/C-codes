/*Accept character from user and if character is in small case
then convert it into upper case and vise versa*/

#include <stdio.h>
char changeCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else
    {
        printf("invalid choice");
    }
    return ch;
}
int main()
{
    char ch = '\0';
    printf("Enter character:\n");
    scanf("%c", &ch);

    char cRet = '\0';
    cRet = changeCase(ch);
    printf("Ans:%c \n", cRet);
    return 0;
}