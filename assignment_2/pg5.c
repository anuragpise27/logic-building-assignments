#include<stdio.h>
#define true 1
#define false 0
typedef int BOOL;
BOOL chkevent(int iNo)
{
    if(iNo%2==0)
    {
        printf("even");
    }
    else{
        printf("odd");
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=false;
    printf("enter");
    scanf("%d",&iValue);
    bRet=chkevent(iValue);
    return 0;
}