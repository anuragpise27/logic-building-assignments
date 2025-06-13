#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    char Fname[20]={'\0'};
    int fd=0,iRet=0;
    char Buffer[10]={'\0'};

    printf("enter the file name");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR);
    if(fd== -1)
    {
        printf("unable to open");
        return -1;
    }
    else
    {
       printf("file opned succesfully");
       while((iRet=read(fd,Buffer,10)) != 0)
       {
        printf("%s",Buffer);
        memset(Buffer,'\0',10);
        
       }
        
    }
    close(fd);
    return 0;
}