#include<stdio.h>
void Display()
{
    int i;
    printf("symbol\tdicimal\thexadecimal\toctal\t");
    
    for(i=0;i<255;i++)
    {
        if(i>=32 && i<=126)
        {
            printf("%c\t%3d\t%2X\t%03o\n",i,i,i,i);
        }
        else{
            printf(" .\t%3d\t%2X\t%03o\n",i,i,i);
        }
    }
}
int main()
{
    Display();
    return 0;
}