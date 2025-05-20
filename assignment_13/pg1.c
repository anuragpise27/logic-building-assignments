#include<stdio.h>
void Pattern(int iRow,int iCol)
{
   int i,j;
   char ch='A';
   for(i=1;i<=iRow;i++,ch++)
   {
    for(j=1;j<=iCol;j++)
    {
       
         printf("%c\t",ch);
       
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