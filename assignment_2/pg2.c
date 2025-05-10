#include<stdio.h>
void display(int iNo)
{
    int iCnt=0;
    while(iNo>iCnt)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}