/*write a program which accept string from user and toggle the case*/
#include <stdio.h>
void convertIntoVowel(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char Arr[20];
    printf("Enter string:\n");
    scanf("%[^'\n']s", Arr);

    convertIntoVowel(Arr);
    printf("String in lower case:%s\n", Arr);
    return 0;
}