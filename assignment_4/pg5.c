#include<stdio.h>
int  FactDiff(int iNo)
{
    int i;
    int iFactSum=0;
    int iNonFactSum=0;
    

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for( i=1;i<iNo;i++)
    {
        if(iNo%i == 0)
        {
           // printf("%d\n",i);
            iFactSum += i;
        }
        else
        {
           // printf("%d\n",i);
             iNonFactSum += i;

        }
    }
   

    return iFactSum-iNonFactSum;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("eneter no:");
    scanf("%d",&iValue);
    iRet=FactDiff(iValue);
    printf("%d",iRet);
    return 0;

}