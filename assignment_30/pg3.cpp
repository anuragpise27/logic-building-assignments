#include<iostream>
using namespace std;

bool CheckBit(unsigned int iNo)
{
    unsigned int iMask1 = 128;
    unsigned int iMask2 = 131072;
    unsigned int iMask3 = 2097152;
    unsigned int iMask4 = 268435356;
    unsigned int iResult1 = 0;
    unsigned int iResult2 = 0;
    unsigned int iResult3 = 0;
    unsigned int iResult4 = 0;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;
    iResult3 = iNo & iMask3;
    iResult4 = iNo & iMask4;

    return (iResult1 == iMask1   && iResult2==iMask2 && iResult3==iMask3 && iResult4==iMask4);
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
        cout<<"7,15,21 th and 28th bit is ON\n";
    }
    else
    {
        cout<<" 7,15,21 th and 28th bit is OFF\n";
    }

    return 0;
}