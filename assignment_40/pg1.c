#include<stdio.h>

void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        printf(" * ");
        i++;
        Display();
    }
}

int main()
{
    Display();
   
    return 0;
}