#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ChangeBit(UINT iNo,int iPos)    // 12
{
    UINT iMask=1<<(iPos - 1);
    UINT iResult = 0;
    

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0,iLocation=0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;
    cout<<"Enter position: \n";
    cin>>iLocation;

    iRet = ChangeBit(iValue,iLocation);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}