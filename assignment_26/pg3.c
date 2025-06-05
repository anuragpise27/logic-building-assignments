#include<stdio.h>

int FirstChar(char *str,char ch)
{
 
    int i=0;
    while (*str != '\0')
    {
        if(*str == ch)
        {
           return i;
        }
        
        str++;
        i++;
    }
    return -1;
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
    bRet=FirstChar(arr,iValue);
    printf("%d",bRet);


}