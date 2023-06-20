/*accept a string from user and reverse the string*/
#include <stdio.h>
void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    start = str;
    end = str;
    while (*end != '\0')
    {
        end++;
    }
    end--;
    char temp = '\0';
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    char Arr[20];
    printf("Enter string:\n");
    scanf("%[^'\n']s", Arr);

    strrevX(Arr);
    printf("string in reverse order:%s", Arr);
    return 0;
}