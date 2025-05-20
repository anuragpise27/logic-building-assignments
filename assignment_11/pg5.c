#include<stdio.h>
void Pattern(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        
        {
            printf("%d",i*2);
        }
    }


}
int main()
{
    int iValue=0;
    printf("enter no=");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}