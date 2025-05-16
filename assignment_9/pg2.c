#include<stdio.h>
#define true 1
#define false 0
typedef int bool;
bool ChkZero(int iNo)
{
    int iDigit=0;
    while (iNo != 0)
    {
      iDigit=iNo%10;
      if(iDigit==0)
      {
        return true;
      }
      iNo=iNo/10;
        
    }
    return false;
    

}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("enter no");
    scanf("%d",&iValue);
    bRet=ChkZero(iValue);
    if(bRet==true)
    {
        printf("it contain zero");
    }
    else
    {
        printf("it not contain zero");
    }
    return 0;
}