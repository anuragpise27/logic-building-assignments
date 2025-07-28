#include<stdio.h>

void Display(int str)
{
   static char ch = 'a';
    if(str > 0)
    {
       printf(" %c ",ch);
       ch++;
       Display(str - 1 );
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