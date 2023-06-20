// Wap which acceept number from user and if number is less than 50 then prints small
// greater than 50 and less than 100 print medium
// greater than 100 print large

#include <stdio.h>
void checkVal(int iNo)
{
    if (iNo < 50)
    {
        printf("small");
    }
    else if (iNo >= 50 && iNo <= 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d", &iValue);
    checkVal(iValue);
    return 0;
}