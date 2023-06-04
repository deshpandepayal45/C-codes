// calculate the capita letters
#include <stdio.h>
int countCapital(char *str)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }
        *str++;
    }
    return iCount;
}
int main()
{
    char Arr[20];
    int iRet = 0;
    char cVal = '\0';

    printf("enter the name");
    scanf("%[^\n]s", Arr);

    iRet = countCapital(Arr);
    printf("Number of small letters : %d \n", iRet);
    return 0;
}