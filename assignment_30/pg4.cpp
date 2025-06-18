#include<iostream>
using namespace std;

bool CheckBit(unsigned int iNo)
{
    unsigned int iMask1 = 128;
    unsigned int iMask2 = 256;
    unsigned int iMask3 = 512;
   
    unsigned int iResult1 = 0;
    unsigned int iResult2 = 0;
    unsigned int iResult3 = 0;
   

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;
    iResult3 = iNo & iMask3;
   

    return (iResult1 == iMask1   && iResult2==iMask2 && iResult3==iMask3 );
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
        cout<<"7,8 th and 9th bit is ON\n";
    }
    else
    {
        cout<<" 7,8 th and 9th bit is OFF\n";
    }

    return 0;
}