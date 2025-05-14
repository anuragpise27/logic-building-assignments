#include<stdio.h>
int  DollarToInr(int iNo )
{
   
   int iRupees;
   iRupees= iNo * 70;
   return iRupees;


}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter no");
    scanf("%d",&iValue);
    iRet = DollarToInr(iValue);
    printf("%d",iRet);
    return 0;
}