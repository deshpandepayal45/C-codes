// write a recursove program which display below pattern
// 1 2 3 4 5
#include <stdio.h>
void Display()
{
    static int i = 0;
    if (i != 5)
    {
        i++;
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