// write a recursive program which display below pattern
// 1 2 3 4 5
#include <stdio.h>
void Display()
{
    static int i = 1;
    if (i != 6)
    {
        printf("%d ", i);
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