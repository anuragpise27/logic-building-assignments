#include<stdio.h>

void Display(int iNo)
{
   static char ch = 'A';
    if(iNo > 0)
    {
       printf("%c",ch);
       ch++;
       Display(iNo - 1);
    }
}

int main()
{
    int iValue = 0;
    printf("enter number");
    scanf("%d",&iValue);
    
    Display(iValue);
      

    return 0;
}