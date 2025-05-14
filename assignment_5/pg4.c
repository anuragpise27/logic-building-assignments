#include<stdio.h>
void OddDisplay(int iNo)
{ 
  int i;
  for(i=0;i<=iNo;i++)
  {
    if(i%2 != 0)
    {
        printf("%d\n",i);
    }
  }
}
int main()
{
    int iValue=0;
    printf("enter no");
    scanf("%d",&iValue);
    OddDisplay(iValue);
    return 0;
}