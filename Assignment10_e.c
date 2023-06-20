/*write a program which accepts area in square feet and
convert it into square meter*/

// 1 square feet=0.0929 square meter

#include <stdio.h>
double areaIntoSquareMeter(int iVal)
{
    double sMeter = 0.0;
    sMeter = iVal * 0.0929;
    return sMeter;
}
int main()
{
    int iVal = 0;
    printf("enter the area in sqaure feet:\n");
    scanf("%d", &iVal);

    double dRet = 0.0;
    dRet = areaIntoSquareMeter(iVal);
    printf("Area in square meter:%f\n", dRet);
    return 0;
}