#include<stdio.h>
double KmToMeter(int iNo)
{
    int iKilo;
    iKilo=iNo*1000;
    //printf("%d",iKilo); 
    return iKilo;
}
int main()
{
    int iValue=0;
    int dRet=0;
    printf("enetr meter");
    scanf("%d",&iValue);
    dRet=KmToMeter(iValue);
    printf("%d",dRet);
    return 0;
}