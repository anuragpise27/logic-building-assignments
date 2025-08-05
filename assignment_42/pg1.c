#include<stdio.h>

void Display(int iNo)
{
   
    if(iNo == 0)
    {
        return ;
    }

    
       printf(" %d * ",iNo);
      
       Display(iNo -1);
    
}

int main()
{
    int iValue = 0;
    printf("enter number");
    scanf("%d",&iValue);

    Display(iValue);
   
    return 0;
}