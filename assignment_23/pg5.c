#include<stdio.h>
void Display(char ch)
{
    int i;
   
    
    if(ch>=0 && ch<= 255)
    {
        printf("decimal=%3d\n",ch);
        printf("octal=%03o\n",ch);
        printf("hexa=%2X",ch);
    }
}
int main()
{
    char iValue='\0';
    printf("enter char");
    scanf("%c",&iValue);
    Display(iValue);
    return 0;
}