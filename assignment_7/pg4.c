#include<stdio.h>
int  OddFactorial(int iNo )
{
   int iFact=1;
   int i;
   if(iNo<0)
   {
    iNo=-iNo;
   }
   for(i=1;i<=iNo;i++)
   {
    if(i%2!=0)
    {
     iFact=iFact * i;
    }
   }
   return iFact;
  

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter no");
    scanf("%d",&iValue);
    iRet =OddFactorial(iValue);
    printf("%d",iRet);
    return 0;
}