// Write a program which accept number from user and display below pattern
// input :5
// output:5 * 4 * 3 * 2 * 1 *
#include <stdio.h>
void Display(int iVal)
{
    // static int i = iVal;
    if (iVal != 0)
    {
        printf("%d * ", iVal);
        iVal--;
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