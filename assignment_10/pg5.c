#include<stdio.h>
int diff(int iNo)
{
    int iDigit=0;
    int iEvenSum=0;
    int iOddSum=0;
    int idff=0;
    while (iNo != 0)
    {
      iDigit=iNo%10;
      if(iDigit%2==0)
      {
         iEvenSum= iEvenSum+iDigit;
      }
      else
      {
         iOddSum=iOddSum+iDigit;
      }
      iNo=iNo/10;
        
    }
   idff=iEvenSum-iOddSum;
  //return iEvenSum -iOddSum;
  printf("%d",idff);
    

}
int main()
{
    int iValue=0;
    int bRet=0;
    printf("enter no");
    scanf("%d",&iValue);
    bRet=diff(iValue);
    
    return 0;
}