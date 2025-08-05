#include<stdio.h>

int Product(int iNo)
{
   int iDigit = 0;
    
    iDigit = iNo % 10;
   
    return (iDigit) + Product(iNo/10);
    
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number");
    scanf("%d",&iValue);

    iRet=  Product(iValue);
    printf("summation : %d",iRet);

   
    return 0;
}