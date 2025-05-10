#include<stdio.h>
#include<ctype.h>
void displayconvert(char CValue)
{
    if(isupper(CValue))
    {
        printf("%c",tolower(CValue));
    }
    else if(islower(CValue))
    {
        printf("%c",toupper(CValue));
    }
}
int main()
{
    char cvalue='\0';
    printf("enter char");
    scanf("%c",&cvalue);
    displayconvert(cvalue);
    return 0;
}