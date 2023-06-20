/*accept character from user and display its decimal octal and hexadecimal value*/

#include <stdio.h>
void displayASCII(char ch)
{
    printf("%d|%c|%x|%o", ch, ch, ch, ch);
}
int main()
{
    char ch = '\0';
    printf("Enter character:\n");
    scanf("%c", &ch);
    displayASCII(ch);
    return 0;
}