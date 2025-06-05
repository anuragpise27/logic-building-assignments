#include<stdio.h>

int LastChar(char *str,char ch)
{
 
    int i=0;
    int last=-1;
    while (*str != '\0')
    {
        if(*str == ch)
        {
           last=i;
        }
        
        str++;
        i++;
    }
    return last;
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
    bRet=LastChar(arr,iValue);
    printf("%d",bRet);


}