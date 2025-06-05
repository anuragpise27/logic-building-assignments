#include<stdio.h>

int CountChar(char *str,char ch)
{
 
    int iCount=0;
    while (*str != '\0')
    {
        if(*str == ch)
        {
           iCount++;
        }
        
        str++;
    }
    return iCount;
}
int main()
{
    
    char arr[100];
    char iValue='\0';
    int  bRet=0;
    printf("enter string=\n");
    scanf("%[^'\n']s",arr);
    printf("enter charaeter=\n");
    scanf(" %c",&iValue);
    bRet=CountChar(arr,iValue);
    printf("%d",bRet);


}