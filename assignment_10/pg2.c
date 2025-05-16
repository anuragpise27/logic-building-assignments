#include<stdio.h>
int CountOdd(int iNo)
{
    int iDigit=0;
    int icount=0;
    while (iNo != 0)
    {
      iDigit=iNo%10;
      if(iDigit%2!=0)
      {
        icount++;
      }
      iNo=iNo/10;
        
    }
   
   printf("%d",icount);
    

}
int main()
{
    int iValue=0;
    int bRet=0;
    printf("enter no");
    scanf("%d",&iValue);
    bRet=CountOdd(iValue);
    
    return 0;
}