#include<stdio.h>
#define true 1
#define false 0
typedef int bool;
 bool Chk(char ch)
 {
    if(ch>'A' && ch<'z')
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
    char cValue='\0';
    bool bRet=false;
    
    printf("enter charater");
    scanf("%c",&cValue);

    bRet=Chk(cValue);
    if(bRet==true)
    {
        printf("it is charater");
        
    }
    else
    {
        printf("it is not  charater");
    }
    return 0;
 }