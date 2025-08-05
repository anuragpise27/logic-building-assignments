#include<stdio.h>

int Addition(int iNo)
{
   int iDigit = 0;
    
    iDigit = iNo % 10;
   
    return (iDigit) + Addition(iNo/10);
    
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number");
    scanf("%d",&iValue);

    iRet=  Addition(iValue);
    printf("summation : %d",iRet);

   
    return 0;
}