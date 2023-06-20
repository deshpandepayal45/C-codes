// Accept number from user if number is less than 10 then print "hello " otherwise print "Demo"

#include <stdio.h>

void Check(int iNum)
{
    if (iNum < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}
int main()
{
    int iValue = 0;
    printf("enter the number:\n");
    scanf("%d", &iValue);
    Check(iValue);
    return 0;
}