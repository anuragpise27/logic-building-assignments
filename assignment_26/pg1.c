#include<stdio.h>
#define true 1
#define false 0
typedef int bool;
bool ChkChar(char *str,char ch)
{

    while (*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }
        
        str++;
    }
    return false;
}
int main()
{
    
    char arr[100];
    char iValue='\0';
    bool bRet=false;
    printf("enter string=\n");
    scanf("%[^'\n']s",arr);
    printf("enter charaeter=\n");
    scanf(" %c",&iValue);
    bRet=ChkChar(arr,iValue);
    if(bRet==true)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;


}