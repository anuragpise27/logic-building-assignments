#include<stdio.h>
void Pattern(int iNo)
{ 
    int i;
    if(iNo<0)
    {
        iNo=-iNo;
    }
   for(i=0;i<=iNo;i++)
   {
   
    printf("* $");
   }

}
int main()
{
    int iValue=0;
    printf("enter no");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}