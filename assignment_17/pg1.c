#include<stdio.h>
void Pattern(int iRow,int iCol)
{
  int i,j;
  int k=1;
  for(i=1;i<=iRow;i++)
  {
    for(j=iCol;j>=1;j--)
    {
       if(i==j)
        {
            
         printf("#\t");
        }
        else
        {
            printf("*\t");
        }
    }
    printf("\n");
  }
}
int main()
{
    int iValue1=0,iValue2=0;
    printf("enter rows and columns\n");
    scanf("%d%d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}