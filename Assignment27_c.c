/*accept one string and character from user and return first occurances of that character*/
#include <stdio.h>
int checkFirstOccurances(char *str, char c)
{
    int iCnt = -1, flag = -1;

    for (iCnt = 0; *str != '\0'; iCnt++)
    {
        if (*str == c)
        {
            return iCnt;
        }
        str++;
    }
    return -1;
}
int main()
{
    char Arr[20];
    printf("Enter string:\n");
    scanf("%[^'\n']s", Arr);

    char ch = '\0';
    printf("Enter character:\n");
    scanf(" %c", &ch);

    int iRet = 0;
    iRet = checkFirstOccurances(Arr, ch);
    printf("First occurance of that character:%d\n", iRet);
    return 0;
}