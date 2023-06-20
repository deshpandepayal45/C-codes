// write a recursive program which display below pattern
// A B C D E F
#include <stdio.h>
void Display()
{
    static char ch = 'A';
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