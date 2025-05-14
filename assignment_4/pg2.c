#include<stdio.h>
int FactRev(int iNo)
{
    int i=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=(iNo/2);i>1;i--)
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
    int iRet=0;
    printf("eneter the no.");
    scanf("%d",&iValue);
    iRet=FactRev(iValue);
    printf("%d",iRet);
    return 0;
}