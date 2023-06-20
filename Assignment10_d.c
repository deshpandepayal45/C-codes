/*accept temperature in faranheit and covert into celsius*/
#include <stdio.h>

double tempInCelcius(float val)
{
    double celcuis;
    celcuis = ((val - 32) * 5) / 9;
    return celcuis;
}
int main()
{
    float fValue = 0.0f;
    printf("Enter the temperature in farenheit:\n");
    scanf("%f", &fValue);

    double dRet = 0.0;
    dRet = tempInCelcius(fValue);
    printf("Temperature value in celcius:%f", dRet);
    return 0;
}