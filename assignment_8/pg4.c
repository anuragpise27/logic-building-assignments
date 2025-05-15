#include<stdio.h>
double FhtoCs(float fTemp)
{
    float fCelcius;
    fCelcius=((fTemp-32) * (5/9));
    printf("%f",fCelcius);
}
int main()
{
    float fValue1=0.0;
    double dRet=0.0;
    printf("enetr temperature in fahrenheit");
    scanf("%f",&fValue1);
    dRet=FhtoCs(fValue1);
    printf("%f",dRet);
    return 0;
}