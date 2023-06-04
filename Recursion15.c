#include <stdio.h>
void display(char *str)
{

    if (*str != '\0')
    {
        printf("%s\n", str);
        display(++str);
        printf("%s\n", str);
    }
}

int main()
{
    char Arr[20];
    printf("Enter string:\n");
    scanf("%[^'\n']s", Arr);

    display(Arr);
    return 0;
}