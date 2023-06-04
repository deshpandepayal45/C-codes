#include <stdio.h>
int strLenX(char str[])
{
    int iCnt = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        iCnt++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("please enter string :\n");
    scanf("%[^'\n']", Arr);

    iRet = strLenX(Arr);
    printf("number of character's are %d\n", iRet);
    return 0;
}