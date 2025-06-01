#include<stdio.h>
#include<stdlib.h>
int Display( int Arr[],int iLength,int iNo)
{
    int i;
    int lOccurance=-1;
    for(i=0;i<iLength;i++)
    {
        if((Arr[i])==iNo)
        {
           lOccurance=i;
        }
       
    }
    return  lOccurance;

}
int main()
{
    int iSize=0,i,iValue=0,iRet=0;
    int *p = NULL;
   
    printf("enter N:\n");
    scanf("%d",&iSize);

    printf("enter NO:");
    scanf("%d",&iValue);

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

    iRet=Display(p,iSize,iValue);
    printf("%d",iRet);

    free(p);
    return 0;
}
