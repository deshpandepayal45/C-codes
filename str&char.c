#include <stdio.h>
int main()
{
    char Arr[20];
    char cVal = '\0';

    printf("Enter string\n");
    scanf("%[^'\n']s", Arr);

    printf("Enter character\n");
    scanf(" %c", &cVal);

    printf("characteer is:%c\n", cVal);

    return 0;
}