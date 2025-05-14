#include<stdio.h>
void Table(int iNo)
{ 
  if(iNo<0)
  {
    iNo=-iNo;
  }
  for(int i=1;i<=10;i++)
  {
    printf("%d\n",iNo*i);
  }
}
int main()
{
    int iValue=0;
    printf("enter no");
    scanf("%d",&iValue);
    Table(iValue);
    return 0;
}