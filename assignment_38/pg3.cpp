#include<iostream>
using namespace  std;
template<class T>
T Addition(T arr[],T size)
{
    T sum = 0;
    for(int i=0;i<size;i++)
    {
        sum = sum + arr[i];
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
  for(int i=0;i<iLength;i++)
  {
    printf("%d\n",ptr[i]);
  }
  int iRet = Addition(ptr,iLength);
  printf("%d",iRet);

   
}

