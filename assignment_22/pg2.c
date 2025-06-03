#include<stdio.h>
#define true 1
#define false 0
typedef int bool;
 bool Chk(char ch)
 {
    if(ch>'A' && ch<'Z')
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
        printf("it is capatil");
        
    }
    else
    {
        printf("it is not  capatil");
    }
    return 0;
 }