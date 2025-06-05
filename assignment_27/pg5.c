#include<stdio.h>
void StrCpyX(char *src, char *dest)
{
   while (*src != '\0')
   {
            src++;
    
   }
   while (*dest != '\0')
   {
      *src = *dest;
      dest++;
      src++;
   }
   
   *src= '\0';
   
    

}
int main()
{
    char arr[30]="Marvellous Multti OS";
    char brr[30];
    StrCpyX(arr,brr);
    printf("%s",brr);
    return 0;
}