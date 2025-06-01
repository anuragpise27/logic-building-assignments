#include<stdio.h>
#include<stdlib.h>
int Diffrence(int Arr[],int iLength)
{
  int i;
  for(i=0;i<iLength;i++)
  {
    if((Arr[i]%5)==0 && (Arr[i]%3)==0)
    {
        printf("%d",Arr[i]);
    }
    
  }
  
}
int main()
{
    int iSize=0,iRet=0,i;
    int *p=NULL;
    printf("enter number=\n");
    scanf("%d",&iSize);
    p=(int *) malloc (iSize * sizeof(int));
    if(p==NULL)
    {
        printf("unable to alloacare");
        return -1;
    }
    printf("enter elelments\n");
    for(i=0;i<iSize;i++)
    {
    
        scanf("%d",&p[i]);
    }
    iRet=Diffrence(p,iSize);
    printf("%d",iRet);
    free(p);
    return 0;
}