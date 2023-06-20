// Accept character from user and convert case of character
#include <stdio.h>
void convertCase(char c)
{
    if (c >= 'A' && c <= 'Z') // instead of ascii code we can also write
                            //  actual characters start and end point
    {
        printf("%c\n", c + 32);
    }
    else
    {
        printf("%c\n", c - 32);
    }
}
int main()
{
    char c;
    printf("Enter the character:\n");
    scanf("%c", &c);
    convertCase(c);
    return 0;
}