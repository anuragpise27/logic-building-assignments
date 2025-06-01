#include<stdio.h>
#include<stdlib.h>
int Display( int Arr[],int iLength)
{
    int i;
    int iMax=0;
     iMax=Arr[0];
    for(i=0;i<iLength;i++)
    {
       
        if(Arr[i]>iMax)
        {
          iMax = Arr[i];
        }
       
    }
    return iMax;
    

}
int main()
{
    int iSize=0,i,iRet=0;
    int *p = NULL;
   
    printf("enter N:\n");
    scanf("%d",&iSize);

   
    p=(int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        return -1;
    }
    printf("enter elements\n");
    for(i=0;i<iSize;i++)
    {
        scanf("%d",&p[i]);
    }

    iRet=Display(p,iSize);
   printf("%d",iRet);

    free(p);
    return 0;
}
