#include<iostream>
using namespace std;

typedef unsigned int UINT;
#define true 1
#define false 0

UINT ChkBit(UINT iNo, UINT iPos)
{
    UINT iMask=1<<(iPos - 1);

    if(iNo & iMask != 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    UINT iValue = 0, iLocation1 = 0;
     int iRet=false;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Enter the first position : \n";
    cin>>iLocation1;
    
    iRet= ChkBit(iValue,iLocation1);

   if(iRet==true)
   {
    cout<<"true";
   }
   else
   {
    cout<<"false";
   }

    return 0;
}