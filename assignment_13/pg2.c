#include<stdio.h>
void Pattern(int iRow,int iCol)
{
   int i,j;
   char ch1='A';
   char ch2='a';
   for(i=1;i<=iRow;i++,ch1++,ch2++)
   {
    for(j=1;j<=iCol;j++)
    {
       
        if(i%2==0)
        {
             printf("%c\t",ch2);
        }
        else
        {
             printf("%c\t",ch1);
        }
       
    }
    printf("\n");
   }
}
int main()
{
    int iVAlue1=0,iValue2=0;
    printf("enter rows");
    scanf("%d",&iVAlue1);
    printf("enter columns");
    scanf("%d",&iValue2);
    Pattern(iVAlue1,iValue2);
    return 0;
    
}