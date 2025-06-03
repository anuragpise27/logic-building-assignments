#include<stdio.h>
int CountSmall(char *str)
{
   
   int i=0;
    while(*str != '\0')
  {
   
    if(*str>='a' && *str<='z')
    {
        i++;
    }
    str++;
   
  }

    return i;
}
int main()
{
    char arr[20];
    int iRet=0;
    printf("enter string");
    scanf("%[^'\n']s",arr);
    iRet=CountSmall(arr);
    printf("%d",iRet);
    return 0;
}