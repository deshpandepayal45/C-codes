// write a recursive program whichh accept string from user and count small letters
#include <stdio.h>
int countSmall(char *str)
{
    static int i = 0;
    if (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            i++;
        }
        *str++;
        countSmall(str);
    }
    return i;
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%[^\n]s", str);
    int iRet = 0;
    iRet = countSmall(str);
    printf("number of small letters:%d\n", iRet);
    return 0;
}