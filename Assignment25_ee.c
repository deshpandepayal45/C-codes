/*Accept string from user and return it in reverse order*/
#include <stdio.h>
void Reverse(char *str)
{
    int start = 0, last = 0;
    char *end = NULL;
    char temp = '\0';
    end = str;
    while (*end != '\0')
    {
        last++;
        end++;
    }
    last--;
    while (start < last)
    {
        temp = str[start];
        str[start] = str[last];
        str[last] = temp;
        start++;
        end--;
    }
}
int main()
{
    char Arr[20];
    printf("Enter the string.\n");
    scanf("%[^'\n']s", Arr);
    Reverse(Arr);
    printf("Reversed string:%s", Arr);

    return 0;
}