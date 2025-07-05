#include<iostream>
using namespace std;
template<class T>
int Frequency(T arr[],int iSize,T iNo)
{
    int count=0;
    for(int i=0;i<iSize;i++)
    {
        if(arr[i]==iNo)
        {
            count++;
        }
    }
    return count;
 
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
    cout<<"enter the value to count \n";
    cin>>iValue;
    iRet=Frequency(ptr,iLength,iValue);
    printf("%d",iRet);

    return 0;
    
}