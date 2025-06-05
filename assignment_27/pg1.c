#include<stdio.h>
#include<string.h>
void StrCpyX(char *src, char *dest)
{
    while (*src !='\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    //*dest='\0';
    return dest;
    

}
int main()
{
    char arr[30]="Marvellous Multti OS";
    char brr[30];
    StrCpyX(arr,brr);
    printf("%s",brr);
    return 0;
}