#include<stdio.h>
void Display(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        for(int i=ch;i<='Z';i++)
     {
        printf("%c",i);
     }
    }
    else if(ch>='a' && ch<='z')
    {
        for(int i=ch;i<='z';i++)
     {
        printf("%c",i);
     }
    }
    else{
        printf("not valid");
    }

}
int main()
{
    char iValue='\0';

    printf("enter the char");
    scanf("%c",&iValue);

    Display(iValue);
    return 0;
}