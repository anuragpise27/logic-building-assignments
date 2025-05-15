#include<stdio.h>
double RectArea(float fWidth,float fHeight)
{
    float fArea;
    fArea= fWidth*fHeight ;
    printf("%f",fArea);

}
int main()
{
    float fValue1=0.0;
    float fValue2=0.0;
    double dRet=0.0;
    printf("enetr width");
    scanf("%f",&fValue1);
    printf("enetr height");
    scanf("%f",&fValue2);
    dRet=RectArea(fValue1,fValue2);
    printf("%f",dRet);
    return 0;
}