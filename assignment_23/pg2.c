#include<stdio.h>
void DisplayCorrsponadensChar(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        printf("%c",32-ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("%c",32+ch);
    }
    else{
        printf("%c",ch);
    }

}
int main()
{
    char iValue='\0';

    printf("enter the char");
    scanf("%c",&iValue);

    DisplayCorrsponadensChar(iValue);
    return 0;
}