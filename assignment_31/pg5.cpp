#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ChangeBit(UINT iNo)    // 12
{
    UINT iMask = 0x0000000F;
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = ChangeBit(iValue);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}