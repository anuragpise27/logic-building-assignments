#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleNibbles(UINT iNo)    
{
    UINT iMask=0xF000000F;
    UINT iResult = 0;
    

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;
   

    iRet =ToggleNibbles (iValue);

    cout<<"toggled bit is : "<<iRet<<endl;

    return 0;
}