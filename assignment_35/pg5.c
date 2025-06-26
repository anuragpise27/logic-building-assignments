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
int DigitSum(PNODE Head)
{
   while( Head != NULL)
   {
    int num = Head -> data;
    int sum =0;
    while(num != 0)
    {
        num = num % 10;
       
        num = num / 10;
         sum = sum + num;
    }
    printf("%d",sum);
    Head = Head -> next;
   }
   

}
int main()
{
    PNODE head = NULL;
    int iRet = 0;
    
    InsertFirst(&head,101);
    InsertFirst(&head,202);
    InsertFirst(&head,304);
    InsertFirst(&head,5);

    Display(head);
    iRet=DigitSum(head);
    printf("%d\n",iRet);
    



    return 0;

}