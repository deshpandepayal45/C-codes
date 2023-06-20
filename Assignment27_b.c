/*accept one string from user and character from user and check its frequency*/

#include <stdio.h>
int checkFrequency(char *str, char ch)
{
    int iFreq = 0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            iFreq++;
        }
        str++;
    }
    return iFreq;
}
int main()
{
    char Arr[20];
    printf("Enter character:\n");
    scanf("%[^'\n']s", Arr);

    char ch = '\0';
    printf("Enter character:\n");
    scanf(" %c", &ch);

    int iRet = 0;
    iRet = checkFrequency(Arr, ch);
    printf("Frequency of character is:%d\n", iRet);

    return 0;
}