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

int Ismax(int num)
    {
       int max = 0;
       int digit;
       while(digit != 0)
       {
        digit = num % 10;
        if(digit > max)
         {
            max= digit;
         }
        temp = temp / 10;
       }
       return max;
    }
void DisplayPal(PNODE Head)
{
    while (Head != NULL)
    {
      
        printf("%d",Ismax(Head->data));
      
       Head = Head -> next;
       
    }
   
    
}    
    
    


int main()
{
    PNODE head = NULL;
    int iRet = 0;
    
    InsertFirst(&head,89);
    InsertFirst(&head,6);
    InsertFirst(&head,414);
    InsertFirst(&head,17);
    InsertFirst(&head,28);
    InsertFirst(&head,11);

   
    DisplayPal(head);
    
     
   
    



    return 0;

}