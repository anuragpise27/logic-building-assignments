#include<stdio.h>
void displayfactor(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if(iNo%i==0)
        {
            printf("%d",i);
        }
    }
}
int main()
{
    int iValue=0;
    printf("enter no.");
    scanf("%d",&iValue);
    displayfactor(iValue);
    return 0;
}
