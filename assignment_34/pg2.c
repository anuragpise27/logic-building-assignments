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
int SearchLastOcc(PNODE Head,int no)
{
    int Pos=1,lastpos=-1;
    while(Head  != NULL)
    {
        if(Head -> data == no)
        {
            lastpos = Pos;
        }
        Head = Head -> next;
        Pos++;


    }
    return lastpos;
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;
    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,10);
    InsertFirst(&head,20);
    InsertFirst(&head,30);
    InsertFirst(&head,40);

    Display(head);
    iRet=SearchLastOcc(head,21);
    printf("the occurance of last is%d\n",iRet);
    



    return 0;

}