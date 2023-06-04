// calculate the small letters
#include <stdio.h>
int countOccurances(char *str)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
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

    iRet = countOccurances(Arr);
    printf("Number of small letters : %d \n", iRet);
    return 0;
}