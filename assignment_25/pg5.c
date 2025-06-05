#include<stdio.h>
int CountWhite( char  *str)
{
    int iCount=0;
    while (*str != '\0')
    {
        if(*str == ' ')
        {
           iCount++; 
        }
        str++;
       
    }
    return iCount;
    
}
int main()
{
    char arr[20];
    int iRet=0;
    printf("enter string");
    scanf("%[^'\n']s",arr);

    iRet=CountWhite(arr);
    printf("%d",iRet);
    
    return 0;
}