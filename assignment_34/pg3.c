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
int Addition(PNODE Head)
{
    int iSum = 0;
    while(Head != NULL)
    {
        iSum = iSum + Head -> data;
        Head = Head -> next;
    }
    return iSum;

}
int main()
{
    PNODE head = NULL;
    int iRet = 0;
    
    InsertFirst(&head,10);
    InsertFirst(&head,20);
    InsertFirst(&head,30);
    InsertFirst(&head,40);

    Display(head);
    iRet=Addition(head);
    printf("addition =%d\n",iRet);
    



    return 0;

}