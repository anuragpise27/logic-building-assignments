#include<stdio.h>

int REv(char *str)
{
 
    int start=0,end=0;
    char temp;
    while (*str != '\0')
    {
        end ++;
       
    }
    end --;
    while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;

        start++;
        end--;
    }
    
}
int main()
{
    
    char arr[100];
    
   
    printf("enter string=\n");
    scanf("%[^'\n']s",arr);
    
    REv(arr);
    printf("%s",arr);
    return 0;
    

}