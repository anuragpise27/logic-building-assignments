#include<stdio.h>

 void ChkSmall(char ch)
 {
   if(ch=='A' || ch=='a')
   {
    printf("your exam at 7 am");
   }
   else if(ch=='B' || ch=='b')
   {
    printf("your exam at 8:30 am");
   }
   else if(ch=='C'  || ch=='c')
   {
    printf("your exam at 8:30am");
   }
   else 
   {
    printf("your exam at 9:30am");
   }

 }

 int main()
 {
    char cValue='\0';
    
    
    printf("enter charater");
    scanf("%c",&cValue);

    ChkSmall(cValue);
   
   
    return 0;
 }