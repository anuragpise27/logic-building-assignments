#include<stdio.h>
int Diff(char *str)
{
   
   int i=0,j=0;
   int iSmall=0,iCaptial=0;
    while(*str != '\0')
  {
   
    if(*str>='A' && *str<='Z')
    {
        i++;
    }
    if(*str>='a' && *str<='z')
    {
        j++;
    }
    str++;
   
  }

    return j-i;
}
int main()
{
    char arr[20];
    int iRet=0;
    printf("enter string");
    scanf("%[^'\n']s",arr);
    iRet=Diff(arr);
    printf("%d",iRet);
    return 0;
}