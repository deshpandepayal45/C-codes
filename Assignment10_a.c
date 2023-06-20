/*wap which accept radious of circle from user and calculate its area*/

#include <stdio.h>
double areaOfCircle(float frad)
{
    double dArea = 0;
    dArea = 3.14 * frad * frad;
    return dArea;
}
int main()
{
    float fRadious = 0;
    double dRet = 0;
    printf("Enter the radious of circle:\n");
    scanf("%f", &fRadious);
    dRet = areaOfCircle(fRadious);
    printf("Area of circle is :%f", dRet);
    return 0;
}