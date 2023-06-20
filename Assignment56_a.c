// write a recursive program which accept string from user and count white spaces in it
#include <stdio.h>
int countSpaces(char *str)
{
    static int iCnt = 0;
    if (*str != '\0')
    {
        if (*str == ' ')
        {
            iCnt++;
        }
        *str++;
        countSpaces(str);
    }
    return iCnt;
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%[^\n]s", str);
    int iRet = 0;
    iRet = countSpaces(str);
    printf("Number of white spaces:%d\n", iRet);
    return 0;
}