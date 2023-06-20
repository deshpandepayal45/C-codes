/*Accept character from user
input :Q
output:Q,R,S,T,U,V,W,X,Y,Z

input :f
output:f,e,d,c,b,a

*/

#include <stdio.h>
void displayCharacter(char ch)
{
    // printf("----------------------------------------------------------");
    if (ch >= 'A' && ch <= 'Z')
    {
        while (ch <= 'Z')
        {
            printf("%c\n", ch);
            ch++;
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        while (ch >= 'a')
        {
            printf("%c\n", ch);
            ch--;
        }
    }
    else
    {
        printf("Please enter characters only");
    }
}
int main()
{
    char ch = '\0';
    printf("Enter character:\n");
    scanf("%c", &ch);

    displayCharacter(ch);

    return 0;
}