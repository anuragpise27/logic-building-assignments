#include<stdio.h>
unsigned long long  Factorial(int iNo)
{ 
    unsigned long long  ifact=1;
   if(iNo<0)
   {
    iNo=-iNo;
   }
   for(int i=1;i<=iNo;i++)
   {
    ifact=ifact*i;
    
   }
   return ifact;
}
int main()
{
    int iValue=0;
     int iRet=0;
    printf("enter no");
    scanf("%d",&iValue);
     iRet=Factorial(iValue);
    printf("%d",iRet);
    return 0;
}