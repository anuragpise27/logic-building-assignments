#include<stdio.h>
int MultiFact(int iNo)
{
  int i;
  int iMul=1;
  if(iNo<0)
  {
    iNo=-iNo;
  }
  for(i=1 ;i<=iNo/2; i++)
  {
    if((iNo % i) ==0)
    {
       printf("%d\n",i);
         iMul *= i;
        
        
    }
      
     
  }
 return iMul;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enetr no.");
    scanf("%d",&iValue);
    iRet=MultiFact(iValue);
    printf("%d",iRet);
    return 0;
}