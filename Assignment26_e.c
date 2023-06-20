/*write a program which accept string from user and count its white spaces*/
#include <stdio.h>
int countSpaces(char *str)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[20];
    printf("Enter string:\n");
    scanf("%[^'\n']s", Arr);

    int iRet = 0;
    iRet = countSpaces(Arr);
    printf("Number of white spacases:%d\n", iRet);
    return 0;
}