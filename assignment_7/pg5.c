#include<stdio.h>
int  FactorialDiff(int iNo )
{
   int ievenfact=1;
   int ioddfact=1;
   int i;
   if(iNo<0)
   {
    iNo=-iNo;
   }
   for(i=1;i<=iNo;i++)
   {
    if(i%2==0)
    {
     ievenfact=ievenfact * i;
    }
    else
    {
        ioddfact=ioddfact*i;
    }
   }
   return ievenfact - ioddfact;
  

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter no");
    scanf("%d",&iValue);
    iRet =FactorialDiff(iValue);
    printf("%d",iRet);
    return 0;
}