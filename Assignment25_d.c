/*write a program which accepts string from user and check it contains vowel or not*/
#include <stdio.h>
#include <stdbool.h>
bool checkVowel(char *str)
{
    int temp = 0;
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            temp = 1;
        }
        str++;
    }
    return temp;
}
int main()
{
    bool bRet = false;
    char Arr[20];
    printf("Enter the string:\n");
    scanf("%[^'\n']s", Arr);
    bRet = checkVowel(Arr);
    if (bRet == true)
    {
        printf("String contains vowel.\n");
    }
    else
    {
        printf("String have not any vowel.\n");
    }
    return 0;
}