// write a recursive program which display below pattern
//* * * * *
#include <stdio.h>
void Display()
{
    static int i = 0;
    while (i != 5)
    {
        printf("* ");
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