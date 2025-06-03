#include<stdio.h>
#define true 1
#define false 0
typedef int bool;
bool Display(char ch)
{
  if(ch>='!' && ch<='*')
  {
    return true;
  }
  else
  {
    return false;
  }

}
int main()
{
    char iValue='\0';
    bool bRet=false;

    printf("enter the char");
    scanf("%c",&iValue);

    bRet=Display(iValue);
    if(bRet==true)
    {
        printf("true");
    }
    else{
        printf("false");
    }

    return 0;
}