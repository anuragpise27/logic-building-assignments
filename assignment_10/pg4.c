#include<stdio.h>
int MulDigits(int iNo)
{
    int iDigit=0;
    int iMul=1;
    while (iNo != 0)
    {
      iDigit=iNo%10;
      iNo=iNo/10;
      iMul=iMul*iDigit;
        
    }
   
   printf("%d",iMul);
  
    

}
int main()
{
    int iValue=0;
    int bRet=0;
    printf("enter no");
    scanf("%d",&iValue);
    bRet=MulDigits(iValue);
    
    return 0;
}