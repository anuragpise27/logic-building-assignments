#include<stdio.h>

int fact(int iNo)
{
 
 if(iNo <= 1)
 return 1;
 
 return iNo * fact(iNo -1);
  
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number");
    scanf("%d",iValue);

    iRet=  fact(iValue);
    printf("fact : %d",iRet);

   
    return 0;
}