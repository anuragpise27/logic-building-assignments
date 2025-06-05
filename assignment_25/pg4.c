#include<stdio.h>
void strDigit( char  *str)
{
    
    while (*str != '\0')
    {
        if(*str>='0' && *str <='9')
        {
            printf("%s",str);
        }
        
        str++;
    }
    
}
int main()
{
    char arr[20];
    printf("enter string");
    scanf("%[^'\n']s",arr);

    strDigit(arr);
   
    
    return 0;
}