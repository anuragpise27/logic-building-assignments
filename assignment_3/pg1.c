#include<stdio.h>
void printeven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    int i=0;
    int count=0;
    while(count<iNo)
    {
        printf("%d",i);
        i+=2;
        count++;
    }
}
int main()
{
    int iValue=0;
    printf("enter no.");
    scanf("%d",&iValue);
    printeven(iValue);
    return 0;
}