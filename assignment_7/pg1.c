#include<stdio.h>
void Display(int iNo)
{
   int i;
   if(iNo<0)
   {
    iNo=-iNo;
   }
   for(i=0;i<=iNo;i++)
   {
    printf("*");
    
   }
   for(i=0;i<=iNo;i++)
   {
    printf("#");
    
   }


}
int main()
{
    int iValue=0;
    printf("enter no");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}