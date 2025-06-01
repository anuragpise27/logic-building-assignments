#include<stdio.h>
#include<stdlib.h>
int Display( int Arr[],int iLength)
{
    int i;
     int iDigit=0;
     int iSum=0;

    
     
    for(i=0;i<iLength;i++)
    {
       iDigit=Arr[i];
       iSum=0;

       while (iDigit != 0)
       {
         //iDigit=Arr[i]%10;
         //iSum += iDigit;
         //Arr[i]=Arr[i]/10;
         iSum += iDigit%10;
         iDigit /= 10;
       }
       
      
       
    }
    
   return iSum;

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
