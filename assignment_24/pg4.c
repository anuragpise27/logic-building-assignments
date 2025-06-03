#include<stdio.h>
#define true 1
#define false 0
typedef int bool;
int CountSmall(char *str)
{
   
   int i=0;
    while(*str != '\0')
  {
   
    if(*str=='a' || *str=='e' || *str=='i'||*str=='o'||*str=='u')
    {
        return true;
    }
    else
    {
        return false;
    }
    str++;
   
  }

    return i;
}
int main()
{
    char arr[20];
    bool iRet=false;
    printf("enter string");
    scanf("%[^'\n']s",arr);
    iRet=CountSmall(arr);
    if(iRet==true)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}