#include<stdio.h>
void MultiDisplay(int iNo)
{ 
  int i;
  for(i=1;i<=5;i++)
  {

     printf("%d\n",iNo*i);    
  }
}
int main()
{
    int iValue=0;
    printf("enter no");
    scanf("%d",&iValue);
    MultiDisplay(iValue);
    return 0;
}