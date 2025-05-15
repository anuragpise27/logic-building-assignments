#include<stdio.h>
double CircleArea(float fRadius)
{
    float fArea;
    fArea= 3.14 * fRadius * fRadius;
    printf("%f",fArea);

}
int main()
{
    float fValue=0.0;
    double dRet=0.0;
    printf("enetr radius");
    scanf("%f",&fValue);
    dRet=CircleArea(fValue);
    printf("%d",dRet);
    return 0;
}