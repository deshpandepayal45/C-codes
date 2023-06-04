#include <stdio.h>
int countCap(char *str)
{
    static int iCnt = 0;
    if (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
        countCap(str);
    }
    return iCnt;
}
int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s", Arr);

    int iRet = 0;
    iRet = countCap(Arr);
    printf("Number of capital letters are:%d\n", iRet);
    return 0;
}