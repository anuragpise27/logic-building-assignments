#include<stdio.h>
void Pattern(int iNo)
{
    int i;
    char ch='A';
    for(i=1;i<=iNo;i++,ch++)
    {
        printf("%c\n",ch);
    }
}
int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}