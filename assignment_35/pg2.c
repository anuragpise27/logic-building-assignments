#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0
typedef int bool;

struct node 
{
    int data;
    struct node * next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
        
    }


}
void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("| %d |->NULL",Head -> data);
        Head = Head -> next;
    }
    
}

int isprime(int num)
    {
       if(num < 2)
       {
        return 0;
       }
       for(int i=2;i <num;i++)
       {
        if(num % i == 0)
        {
            return 0;
        }
       }
       return 1;
        
    }
int DisplayPerfect(PNODE Head)
{
    while (Head != NULL)
    {
        if(isprime(Head -> data))
        {
           return Head -> data;
        }
        Head = Head -> next;
    }
    return 0;
   
    
}    
    
    


int main()
{
    PNODE head = NULL;
    int iRet = 0;
    
    InsertFirst(&head,89);
    InsertFirst(&head,6);
    InsertFirst(&head,41);
    InsertFirst(&head,17);
    InsertFirst(&head,28);
    InsertFirst(&head,11);

   
    iRet=DisplayPerfect(head);
     
    printf("%d\n",iRet);
    



    return 0;

}