#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
 int i;
 for(i=0;i<iLength;i++)
 {
    if(Arr[i]%5==0)
    {
        printf("%d",Arr[i]);
    }
 }

}
int main()
{
    int i,iSize;
    int *p = NULL;
    printf("enter no.");
    scanf("%d",iSize);
    p=(int *)malloc(iSize * sizeof(int));
    if(p==NULL)
    {
        printf("unable to alloacte");
        return -1;
    }
    printf("enter elements");
    for ( i = 0; i < iSize; i++)
    {
        scanf("%d",&p[i]);
    }
    Display(p,iSize);
    return 0;
    
}