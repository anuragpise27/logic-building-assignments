#include<stdio.h>
void Pattern(int iRow,int iCol)
{
   int i,j;
   int k1=1;
   int k2=1;
   for(i=1;i<=iRow;i++)
   {
    for(j=1;j<=iCol;j++,k1++,k2++)
    {
       
       if(j%2==0)
       {
        printf("%d\t",k2);
       }
       else
       {
        printf("%d\t",k1);
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