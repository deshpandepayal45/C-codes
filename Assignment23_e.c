/* accept division from user and display their exam time depends upon their division
A div=7:00 am
b div=8:30 am
c div=9:20 am
d div=10:30 am
*/

#include <stdio.h>
#include <stdbool.h>
void displayExamTime(char c)
{
    if (c == 'A')
    {
        printf("Exam time -: 7:00 am\n");
    }
    else if (c == 'B')
    {
        printf("Exam time -: 8:30 am\n");
    }
    else if (c == 'C')
    {

        printf("Exam time -: 9:20 am\n");
    }
    else if (c == 'D')
    {
        printf("Exam time -: 10:30 am\n");
    }
    else
    {
        printf("Only 4 div are avialble\n");
    }
}
int main()
{
    char ch = '\0';
    printf("enter the character:\n");
    scanf("%c", &ch);

    displayExamTime(ch);
    return 0;
}