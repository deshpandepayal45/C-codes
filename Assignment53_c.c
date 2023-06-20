// write a program in recursive manner which display followimg patten
// 5 4 3 2 1
#include <stdio.h>
void Display()
{
    static int i = 6;
    if (i != 1)
    {
        i--;

        printf("%d ", i);

        Display();
    }
}
int main()
{
    Display();
    printf("\n");
    return 0;
}