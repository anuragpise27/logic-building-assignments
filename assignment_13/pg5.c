#include<stdio.h>
void Pattern(int iRow,int iCol)
{
   int i,j;
   int k=0;
   for(i=1;i<=iRow;i++)
   {
    for(j=1;j<=iCol;j++,k++)
    {
       
         printf("%d\t",k);
       
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