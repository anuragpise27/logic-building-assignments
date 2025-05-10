#include<stdio.h>
void accept(int iNo)
{
    int iCnt=0;
    for(int i=0;i<=iNo;i++)
    {
        printf("*");
    }
}
int main()
{
    int iValue=0;
    iValue=5;
    accept(iValue);
    return 0;
}