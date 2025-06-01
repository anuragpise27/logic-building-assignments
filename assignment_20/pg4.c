#include<stdio.h>
#include<stdlib.h>
int Display( int Arr[],int iLength,int iNo1,int iNo2)
{
    int i;

    for(i=0;i<iLength;i++)
    {
        if(iNo1<=Arr[i] && iNo2>=Arr[i])
        {
           printf("%d",Arr[i]);
        }
       
    }
    

}
int main()
{
    int iSize=0,i,iStart=0,iEnd=0,iRet=0;
    int *p = NULL;
   
    printf("enter N:\n");
    scanf("%d",&iSize);

    printf("start:");
    scanf("%d",&iStart);

    printf("end:");
    scanf("%d",&iEnd);

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

    iRet=Display(p,iSize,iStart,iEnd);
   // printf("%d",iRet);

    free(p);
    return 0;
}
