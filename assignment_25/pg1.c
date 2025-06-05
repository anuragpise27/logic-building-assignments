#include<stdio.h>
void strLower( char  *str)
{
    
    while (*str != '\0')
    {
        if(*str>='a' && *str <='z')
        {
            *str = *str - 32;
        }
        str++;
    }
    
}
int main()
{
    char arr[20];
    printf("enter string");
    scanf("%[^'\n']s",arr);

    strLower(arr);
    printf("%s",arr);
    
    return 0;
}