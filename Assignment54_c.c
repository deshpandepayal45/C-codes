// write a recursive program which displaybelow pattern
// 5 4 3 2 1
#include <stdio.h>
void Display()
{
    static int i = 0, iCnt = 5;
    if (i < 5)
    {
        printf("%d ", iCnt--);
        i++;
        Display();
    }
}
int main()
{
    Display();
    return 0;
}