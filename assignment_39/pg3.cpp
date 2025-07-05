#include<iostream>
using namespace std;
template<class T>
int SearchFirst(T arr[],int iSize,T iNo)
{
    int firsst=0;
    for(int i=0;i<iSize;i++)
    {
        if(arr[i]==iNo)
        {
            firsst= i;
        }
    }
    return firsst;
 
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