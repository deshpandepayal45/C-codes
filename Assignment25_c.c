/* write a program which accept string from user and return differce between number of capital characters
and number of small characters*/

#include <stdio.h>
int countFrequency(char Arr[20])
{
    int Ccount = 0, sCount = 0;
    for (int iCnt = 0; iCnt < 20; iCnt++)
    {
        if (Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
        {
            Ccount++;
        }
        else if (Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
        {
            sCount++;
        }
    }
    return Ccount - sCount;
}
int main()
{
    char str[20];
    printf("Enter sentences:\n");
    scanf("%[^'\n']s", str);
    int iRet = 0;
    iRet = countFrequency(str);
    printf("Difference between number of capital and small letters:%d\n", iRet);
    return 0;
}