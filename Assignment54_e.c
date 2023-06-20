// write a recursive program which display below pattern
// a b c d e f
#include <stdio.h>
void Display(int iVal)
{
    static int i = 0;
    static char ch = 'a';
    if (i < iVal)
    {
        printf("%c ", ch);
        ch++;
        i++;
        Display(iVal);
    }
}
int main()
{
    int iVal = 0;
    printf("Enter the value:\n");
    scanf("%d", &iVal);

    Display(iVal);
    printf("\n");
    return 0;
}