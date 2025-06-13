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

    fd=open(Fname,O_RDONLY);
    if(fd== -1)
    {
        printf("unable to open");
        return -1;
    }
    else
    {
        printf("file opned sucessfully");
    }
    close(fd);
    return 0;
}