#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos1,UINT iPos2)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iResult = iNo ^ iMask1;
    iResult = iResult ^ iMask2;

    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation1 = 0,iLocation2 = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Enter the first position : \n";
    cin>>iLocation1;
    cout<<"Enter the  second position : \n";
    cin>>iLocation2;

    iRet = ToggleBit(iValue, iLocation1,iLocation2);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}