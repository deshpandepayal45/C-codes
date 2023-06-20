/* write a program which accept string from user and count number of small characters*/

#include <stdio.h>
int countCapitalLetter(char Arr[20])
{
    int count = 0;
    for (int iCnt = 0; iCnt < 20; iCnt++)
    {
        if (Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char str[20];
    printf("Enter sentences:\n");
    scanf("%[^'\n']s", str);
    int iRet = 0;
    iRet = countCapitalLetter(str);
    printf("number of small letters:%d\n", iRet);
    return 0;
}