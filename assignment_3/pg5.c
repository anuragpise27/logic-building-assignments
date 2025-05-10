#include<stdio.h>
#include<ctype.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int displaychkvowels(char cValue)
{
    cValue=tolower(cValue);
    
    if(cValue=='a'||cValue=='i'||cValue=='o'||cValue=='e'||cValue=='u')
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
    char cvalue='\0';
    BOOL bRet=FALSE;
    printf("enter char");
    scanf("%c",&cvalue);
    bRet=displaychkvowels(cvalue);
    if(bRet==TRUE)
    {
        printf("vowels");
    }
    else{
        printf("not");
    }
    return 0;
}