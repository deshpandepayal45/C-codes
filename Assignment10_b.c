/*wap which accept length and breadth of rectangle and display its area*/

#include <stdio.h>
double areaOfRectangle(float fB, float fL)
{
    double dArea = 0;
    dArea = fB * fL;
    return dArea;
}
int main()
{
    float fLength = 0, fBreadth = 0;
    double dRet = 0;
    printf("Enter the length and breadth of rectangle:\n");
    scanf("%f%f", &fLength, &fBreadth);
    dRet = areaOfRectangle(fBreadth, fLength);
    printf("Area of Rectangle is :%f", dRet);
    return 0;
}