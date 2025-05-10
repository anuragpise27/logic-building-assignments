#include<stdio.h>
int display(int iNo,int iFrequency)
{
    int i=0;
    for(int i=0;i<=iFrequency;i++)
    {
        printf("%d",iNo);
        
    }

}
int main()
{
    int iValue=0;
    int iCount=0;
    printf("enter number");
    scanf("%d",&iValue);
    printf("enter frequency");
    scanf("%d",&iCount);
    display(iValue,iCount);
    return 0;

}