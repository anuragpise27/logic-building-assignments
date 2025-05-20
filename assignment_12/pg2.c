#include<stdio.h>
void Pattern(int iRow,int iCol)
{
  int i,j;
  for(i=1;i<=iRow;i++)
  {
    for(j=1;j<=iCol;j++)
    {
        printf("\t%d",j);
    }
    printf("\n");
  }


}
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("enter rows=");
    scanf("%d",&iValue1);
    printf("enter columns=");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}