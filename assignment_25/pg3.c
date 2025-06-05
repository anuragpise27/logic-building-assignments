#include<stdio.h>
void strToggal( char  *str)
{
    
    while (*str != '\0')
    {
        if(*str>='A' && *str <='Z')
        {
            *str = *str + 32;
        }
        else if(*str>='a' && *str <='z')
        {
            *str = *str -32; 
        }
        str++;
    }
    
}
int main()
{
    char arr[20];
    printf("enter string");
    scanf("%[^'\n']s",arr);

    strToggal(arr);
    printf("%s",arr);
    
    return 0;
}