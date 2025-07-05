#include<iostream>
using namespace std;
template<class T>
int SearchFirst(T arr[],int iSize,T iNo)
{
   
    T last = 0;
    for(int i=iSize-1;i>=0;i--)
    {
        if(arr[i]==iNo)
        {
            last = i;
        }
    }
    return last;
 
}
int main()
{
    int *ptr;
    int iLength,iRet=0,iValue=0;
    cout<<"enter the length of array\n";
    cin>>iLength;
    ptr = new int(sizeof(iLength));
    cout<<"enter the elements";
    for(int i=0;i<iLength;i++)
    {
        cin>>ptr[i];
    }
    cout<<"find the first occurance of element\n";
    cin>>iValue;
    iRet=SearchFirst(ptr,iLength,iValue);
    printf("%d",iRet);

    return 0;
    
}