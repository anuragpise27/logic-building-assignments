#include<iostream>
using namespace std;

int CountOne(int iNo)
{
    int iCount = 0;

    while(iNo )
    {
       if(iNo & 1)
     
        iCount++;
        iNo = iNo << 1;
      
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = CountOne(iValue);

    cout<<"Number of 1 : "<<iRet<<"\n";
    
    return 0;
}