/* write a program which displays ascii table .table contains symbol,digitals,hexadecimal and octal representations
 of every member from 0 to 255*/

#include <stdio.h>
void displayASCII()
{
    for (int i = 1; i <= 255; i++)
    {
        printf("%c | %x | %d \n", i, i, i);
    }
}
int main()
{
    displayASCII();
    return 0;
}