#include<stdio.h>
void StrCpyX(char *src, char *dest,int i)
{
   while ((*src != '\0') && (i != 0))
   {
     *dest = *src;
     src++;
     dest++;
     i--;
   }
   *dest = '\0';
   
    

}
int main()
{
    char arr[30]="Marvellous Multti OS";
    char brr[30];
    StrCpyX(arr,brr,10);
    printf("%s",brr);
    return 0;
}