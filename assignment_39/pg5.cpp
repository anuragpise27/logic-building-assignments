#include<iostream>
using namespace std;
template<class T>
T SearchFirst(T arr[],int iSize)
{
   T first = 0,Last =iSize -1;
   T temp;
   while(first<Last)
   {
    temp = arr[first];
    arr[first]= arr[Last];
    arr[Last] = temp;
    first++;
    Last--;
   }

   
 
}
int main()
{
    int *ptr;
    int iLength,iRet=0;
    cout<<"enter the length of array\n";
    cin>>iLength;
    ptr = new int(sizeof(iLength));
    cout<<"enter the elements";
    for(int i=0;i<iLength;i++)
    {
        cin>>ptr[i];
    }
    
    SearchFirst(ptr,iLength);
    cout<<"enter the elements";
    for(int i=0;i<iLength;i++)
    {
        cout<<ptr[i]<<endl;
    }
   

    return 0;
    
}