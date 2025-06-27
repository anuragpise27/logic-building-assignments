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

int product(int num)
    {
       
        int iProd = 1,iDigit;
        while(num != 0)
        {
            iDigit = num % 10;
            if(iDigit != 0)
            {
                iProd *= iDigit;
            }
            num /= 10;
        }
        return iProd;
    }
void DisplayProd(PNODE Head)
{
    while (Head != NULL)
    {
     
        printf("%d",product(Head->data));
      
       Head = Head -> next;
       
    }
   
    
}    
    
    


int main()
{
    PNODE head = NULL;
    int iRet = 0;
    
    InsertFirst(&head,1);
    InsertFirst(&head,2);
    InsertFirst(&head,23);
    InsertFirst(&head,1);
    InsertFirst(&head,28);
    InsertFirst(&head,11);

   
      DisplayProd(head);

    
     
   
    



    return 0;

}