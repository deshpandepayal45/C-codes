// accept character from user and check given character is vowel pr not(a,e,i,o,u)
#include <stdio.h>
#include <stdbool.h>
bool checkVowel(char cVal)
{
    if (cVal == 'a' || cVal == 'e' || cVal == 'o' || cVal == 'i' || cVal == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;
    printf("enter the character :\n");
    scanf("%c", &cValue);
    bRet = checkVowel(cValue);
    if (bRet == true)
    {
        printf("given character is Vowel .\n");
    }
    else
    {
        printf("given character is consonant.\n");
    }
    return 0;
}