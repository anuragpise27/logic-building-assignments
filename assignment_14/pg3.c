#include<stdio.h>
void Pattern(int iRow,int iCol)
{
   int i,j;
   int k=1;
   char ch='a';
  
   for(i=1;i<=iRow;i++)
   {
    for(j=1,ch='a',k=1;j<=iCol;j++,ch++,k++)
    {
      
       
       if(i%2==0)
       {
        printf("%d\t",k);
       }
       else
       {
        printf("%c\t",ch);
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
    printf("enter columns\n");
    scanf("%d",&iValue2);
    Pattern(iVAlue1,iValue2);
    return 0;
    
}