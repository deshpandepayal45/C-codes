/*wap which accept distance from user in km and convert it into meter*/

#include <stdio.h>
int KmToM(int km)
{
    int m = 0;
    m = km * 1000;
    return m;
}
int main()
{
    int iKm = 0;
    int iRet = 0;
    printf("Enter the distance in kilometer:\n");
    scanf("%d", &iKm);
    iRet = KmToM(iKm);
    printf("Kilometer to meter :%d", iRet);
    return 0;
}