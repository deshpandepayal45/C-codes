// write a program which display below pattern
//  a b c d e f
#include <stdio.h>
void Display()
{
    static char ch = 'a';
    static int i = 0;
    while (i != 6)
    {
        printf("%c ", ch);
        ch++;
        i++;
        Display();
    }
}
int main()
{
    Display();
    printf("\n");
    return 0;
}