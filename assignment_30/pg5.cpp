#include<iostream>
using namespace std;

bool CheckBit(unsigned int iNo)
{
    unsigned int iMask1 = 1;
    unsigned int iMask2 = 2147483648;
    
   
    unsigned int iResult1 = 0;
    unsigned int iResult2 = 0;
    

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;
   
   

    return (iResult1 == iMask1   && iResult2==iMask2 );
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
        cout<<"1 th and 32th bit is ON\n";
    }
    else
    {
        cout<<" 1th and 32th bit is OFF\n";
    }

    return 0;
}