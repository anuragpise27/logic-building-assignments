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
        printf("| %d |->",Head -> data);
        Head = Head -> next;
    }
    
}

int Rev(int num)
    {
       int rev = 0;
       while(num != 0)
       {
        rev = rev * 10 +(num % 10);
        num = num / 10;
       }
       return rev;
    }
void Reverse(PNODE Head)
{
    while (Head != NULL)
    {
       Head -> data = Rev(Head -> data);
        Head = Head -> next;
    }
   
    
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

   
    Reverse(head);
    Display(head);
     
   
    



    return 0;

}