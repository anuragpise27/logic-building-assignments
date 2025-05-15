#include<stdio.h>
double SqureMeter(int iValue)
{
  return iValue * 0.0929;
}
   
int main()
{
    int iValue=0;
    double dRet=0;
    printf("enetr meter");
    scanf("%d",&iValue);
    dRet=SqureMeter(iValue);
    printf("%f",dRet);
    return 0;
}