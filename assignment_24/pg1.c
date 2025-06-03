#include<stdio.h>
int CountCapital(char *str)
{
   
   int i=0;
    while(*str != '\0')
  {
   
    if(*str>='A' && *str<='Z')
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
    iRet=CountCapital(arr);
    printf("%d",iRet);
    return 0;
}