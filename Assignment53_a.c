// write a recursive program which display below pattern
// output: * * * * *
#include <stdio.h>
void Display()
{
    static int i = 0;
    if (i != 5)
    {
        i++;
        printf("* ");
        Display();
    }
}
int main()
{
    Display();
    printf("\n");
    return 0;
}