#include<stdio.h>

void Display(int str)
{
    static int i = 1;

    if(i <= str)
    {
       printf(" %d ",i);
       i++;
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