// write a recursive program which display below pattern
// A B C D E F
#include <stdio.h>
void Display(int iVal)
{
    static char ch = 'A';
    static int i = 0;
    if ((i < iVal))
    {
        printf("%c ", ch++);
        i++;
        Display(iVal);
    }
}
int main()
{
    int iVal = 0;
    printf("Enter the number:\n");
    scanf("%d", &iVal);
    Display(iVal);

    printf("\n");
    return 0;
}