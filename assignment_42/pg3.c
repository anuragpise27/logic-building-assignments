#include<stdio.h>

int StrLen(int *str)
{
 
  return 1 + StrLen(str + 1);
    
}

int main()
{
    char Arr[20];
    int iRet = 0;
    printf("enter number");
    scanf("%s",Arr);

    iRet=  StrLen(Arr);
    printf("summation : %d",iRet);

   
    return 0;
}