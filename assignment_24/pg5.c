#include<stdio.h>
int Reverse(char *str)
{
   
   int iStart=0;
   int iEnd=0;
   char iTemp;
    while(str[iEnd] != '\0')
  {
   
   iEnd++;
   
  }
  iEnd--;
  while (iStart<iEnd)
  {
    iTemp = str[iStart];
    str[iStart]= str[iEnd];
    str[iEnd] = iTemp;
    iStart++;
    iEnd--;
  }
  printf("%s",str);
}
int main()
{
    char arr[20];
    
    printf("enter string");
    scanf("%[^'\n']s",arr);
    Reverse(arr);
    
    return 0;
}