// write a recursive program which accept string from user and count number of characters
#include <stdio.h>
int countChar(char *str)
{
    static int iCnt = 0;
    if (*str != '\0')
    {
        iCnt++;
        *str++;
        countChar(str);
    }
    return iCnt;
}
int main()
{
    char str[20];
    printf("enter String:\n");
    scanf("%[^\n]s", str);
    int iRet = 0;
    iRet = countChar(str);
    printf("Number of characters in string:%d\n", iRet);
    return 0;
}
