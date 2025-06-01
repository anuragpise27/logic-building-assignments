#include<stdio.h>
#include<stdlib.h>
int Diffrence(int Arr[],int iLength,int chk)
{
  int i,Count;
  for(i=0;i<iLength;i++)
  {
    if((Arr[i])==chk)
    {
        Count++;

    }
   
  }
 
 return Count ;
 
}
int main()
{
    int iN=0,iNO=0,iRet=0,i;
    int *p=NULL;
    printf("enter number=\n");
    scanf("%d",&iN);
    printf("enter NO=\n");
    scanf("%d",&iNO);
    p=(int *) malloc (iN * sizeof(int));
    if(p==NULL)
    {
        printf("unable to alloacare");
        return -1;
    }
    printf("enter elelments\n");
    for(i=0;i<iN;i++)
    {
    
        scanf("%d",&p[i]);
    }
    iRet=Diffrence(p,iN,iNO);
    printf("%d",iRet);
    free(p);
    return 0;
}