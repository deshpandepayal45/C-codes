// check whether the char is present or not
//  accept string and character from user and check occurance of character
#include <stdio.h>
#include <stdbool.h>

bool checkCharIsPresent(char *str, char ch)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {

            break;
        }
        str++;
    }
    if (*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    char Arr[20];
    char cVal = '\0';

    printf("Enter the string :\n");
    scanf("%[^\n]s", Arr);

    printf("Enter the character to be counted:\n");
    scanf(" %c", &cVal);

    bool iRet = false;
    iRet = checkCharIsPresent(Arr, cVal);
    if (iRet == true)
    {
        printf("character is present");
    }
    else
    {
        printf("character is not present");
    }

    return 0;
}