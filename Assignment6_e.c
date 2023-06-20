// wap which accept total marks and obtained marks from user and calculate percentage
#include <stdio.h>
float getPercentage(int iVal1, int iVal2)
{
    if (iVal1 == 0)
    {
        return 0;
    }
    float fAns = 0;
    fAns = (iVal2 / iVal1) * 100;
    return fAns;
}
int main()
{
    int totalMarks = 0;
    int obtMarks = 0;

    printf("Enter total marks :\n");
    scanf("%d", &totalMarks);
    printf("Enter obtained marks :\n");
    scanf("%d", &obtMarks);

    float fAns = 0.0;
    fAns = getPercentage(totalMarks, obtMarks);
    printf("Percentage is :%f\n", fAns);
    return 0;
}