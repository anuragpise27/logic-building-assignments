#include<stdio.h>

void Display(int str)
{
    static int i = 0;

    if(i < str)
    {
       printf(" * ");
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