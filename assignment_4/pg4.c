#include<stdio.h>
int  SumFact(int iNo)
{
    int i;
    int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for( i=1;i<=iNo;i++)
    {
        if(iNo%i != 0)
        {
            printf("%d\n",i);
            iSum += i;
        }
    }

    return iSum;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("eneter no:");
    scanf("%d",&iValue);
    iRet=SumFact(iValue);
    printf("%d",iRet);
    return 0;

}