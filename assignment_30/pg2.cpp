#include<iostream>
using namespace std;

bool CheckBit(unsigned int iNo)
{
    unsigned int iMask1 = 16;
    unsigned int iMask2 = 131072;
    unsigned int iResult1 = 0;
    unsigned int iResult2 = 0;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    return (iResult1 == iMask1   && iResult2==iMask2);
}

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"5 th and 8th bit is ON\n";
    }
    else
    {
        cout<<" 5 th and 8th bit is OFF\n";
    }

    return 0;
}