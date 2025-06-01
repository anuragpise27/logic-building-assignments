#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
typedef int bool;
bool Display( int Arr[],int iLength,int iNo)
{
    int i;
    for(i=0;i<iLength;i++)
    {
        if((Arr[i])==iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}
int main()
{
    int iSize=0,i,iValue=0;
    int *p = NULL;
    bool iRet=false;
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
    if(iRet==true)
    {
        printf("presenrt");
    }
    else
    {
        printf("not");
    }


    free(p);
    return 0;
}
