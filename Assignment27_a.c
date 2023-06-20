/*Accept string from user and accept one character from user and check it is present in string or not*/

#include <stdio.h>
#include <stdbool.h>
bool checkChar(char *str, char ch)
{
    int temp = 0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            temp = 1;
        }
        str++;
    }
    return temp;
}
int main()
{
    char Arr[20];
    printf("Enter string:\n");
    scanf("%[^'\n']s", Arr);

    char ch = '\0';
    printf("Enter character:\n");
    scanf(" %c", &ch);

    bool bRet = false;
    bRet = checkChar(Arr, ch);
    if (bRet == true)
    {
        printf("character is present:\n");
    }
    else
    {
        printf("character is not present");
    }
}