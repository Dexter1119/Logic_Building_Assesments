/////////////////////////////////////////////////////////////////
//
// Name :        A35Q1.c
// Description : Assessment On Linked List
// Author :      Pradhumnya Changedev Kalsait
// Date :        27/06/25
//
/////////////////////////////////////////////////////////////////


/*
    Input linked list : |11|->|28|->|17|->|41|->|6|->|89|

    Output : 6 28
*/
#include<stdio.h>
#include<stdlib.h>


typedef struct node
{

    int data;
    struct node* next;

}NODE,*PNODE,**PPNODE;


void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("|%d|->",first->data);
        first = first -> next;
    }
    printf("NULL\n");

}
void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    if(NULL == newn)
    {
        printf("Unable to allocate the memory for new node");
        return ;
    }

    newn -> data = iNo ;
    newn -> next = NULL;

    newn -> next = *first;
    *first = newn;
}

void InsertLast(PPNODE first,int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    if(NULL == newn)
    {
        printf("Unable to allocate the memory for new node");
        return ;
    }

    newn -> data = iNo ;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;

    }

}

void DisplayPerfect( PNODE first)
{
   
    if(NULL == first)
    {
        return ;
    }

    int iPer = 0;
    int iCnt = 0;
    int iSum = 0;

   
    while(first != NULL)
    {
        
        iPer = first->data;
        for(iCnt = 1,iSum = 0; iCnt <= (iPer / 2) ; iCnt++)
        {
            if(iPer % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }

        }
        
        if(iSum == iPer)
        {
            printf("%d\t",iPer);
        }

        
        first = first->next;
    }


}
int main()
{
    PNODE head = NULL;
    int iCnt = 0;
    int iSize = 0;
    int iEle = 0;
   

    printf("Enter the number of elements that you wanna add in Linked List:");
    scanf("%d",&iSize);

    printf("Enter the Elements:\n");
    for(iCnt = 1; iCnt <= iSize ; iCnt++)
    {
        scanf("%d",&iEle);
        InsertLast(&head,iEle);
    }


    

    DisplayPerfect(head);
   
    return 0;
}