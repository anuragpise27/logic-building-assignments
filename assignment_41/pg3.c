#include<stdio.h>

void Display(int str)
{

    

    if(str > 0)
    {
       printf(" %d ",str);
       str--;
       Display(str);
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