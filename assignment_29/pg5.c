    #include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

//#define BUFFER_SIZE 1024


void Displaychar(char Fname[],char ch)
{
     int fd=0,iRet=0,i=0,iCapcount=0;
    char Buffer[ch]={'\0'};
    
    
   
    fd= open(Fname, O_RDONLY );
    if(fd== -1)
    {
        printf("unable to open");
        
    }
    else
    {
        printf("file is sucessful opned\n",fd);
        while ((iRet=read(fd,Buffer,ch)) != 0)
        {
           for(i=0;i<iRet;i++)
           {
            if((Buffer[i] ) == ch)
            {
                iCapcount++;
            }
           }
            memset(Buffer,'\0',ch);
        }
        
       printf("%d",iCapcount);

        
        close(fd);
       
    }

}
int main()
{
    char Fname[20]={'\0'};
    char iValue=0;
     printf("enter the file name");
    scanf("%s",Fname);

    printf("enter the numbers charater");
    scanf("%d",&iValue);

   
   Displaychar(Fname,iValue);
   


    return 0;
}