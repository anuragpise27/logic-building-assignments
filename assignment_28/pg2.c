#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    char Fname[20]={'\0'};
    int fd=0;

    printf("enter the file name");
    scanf("%s",Fname);

    fd=creat(Fname,0777);
    if(fd== -1)
    {
        printf("unable to create");
        return -1;
    }
    else
    {
        printf("file created sucessfully");
    }
    close(fd);
    return 0;
}