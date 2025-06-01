#include<stdio.h>
#include<stdlib.h>
int Display( int Arr[],int iLength)
{
    int i;
    
     
    for(i=0;i<iLength;i++)
    {
       
        if(Arr[i]>100 && Arr[i]<999)
        {
          printf("%d",Arr[i]);
        }

      
       
    }
    
    

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

    Display(p,iSize);
   //printf("%d",iRet);

    free(p);
    return 0;
}
