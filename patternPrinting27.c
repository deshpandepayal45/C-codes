#include <stdio.h>
int main()
{
    printf("Ascii code");
    for (int i = 0; i < 127; i++)
    {
        printf("%c\t%d\t%x\t%o\n", i, i, i, i);
    }
    return 0;
}