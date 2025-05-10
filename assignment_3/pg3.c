#include<stdio.h>
void displayevenfactors(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if((iNo%i==0)&&(i%2==0))
        {
            printf("%d",i);
        }
    }
}
int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);
    displayevenfactors(iValue);
    return 0;
}