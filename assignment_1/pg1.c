#include<stdio.h>
int Divide(int iNo1,int iNo2)
{
    int iAns=0;
    if(iNo2==0)
    {
        return -1;
    }
    iAns=iNo1/iNo2;
    return 0;
}
int main()
{
    int iValue1=15,iValue2=5;
    int iRet=0;
    iRet=Divide(iValue2,iValue1);
    printf("division is %d",iRet);
    return 0;
    
}