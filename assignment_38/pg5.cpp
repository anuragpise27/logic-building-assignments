#include<iostream>
using namespace  std;
template<class T>
T Smallest(T arr[],T size)
{
   T sum = arr[0];
   for(int i=0;i<size;i++)
   {
    
    if(arr[i]<sum)
    {
        sum = arr[i];
    }
   }
    
    return sum;
  
}
int main()
{
  int iLength;
  int *ptr;
  printf("enter value ");
  scanf("%d",&iLength);
  ptr = new int(sizeof(iLength));
  for(int i=0;i<iLength;i++)
  {
    scanf("%d",&ptr[i]);
  }
 
  int iRet = Smallest(ptr,iLength);
  printf("%d",iRet);

   
}

