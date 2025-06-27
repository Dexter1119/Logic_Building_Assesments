/////////////////////////////////////////////////////////////////
//
// Name :        A35Q2.c
// Description : Assessment On Linked List
// Author :      Pradhumnya Changedev Kalsait
// Date :        27/06/25
//
/////////////////////////////////////////////////////////////////


/*
   Input linked list : |11|->|20|->|17|->|41|->|22|->|89|

    Output : 11 17 41 89    
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

void DisplayPrime( PNODE first)
{
   
    if(NULL == first)
    {
        return ;
    }

    int iPri = 0;
    int iCnt = 0;
    int iSum = 0;

   
    while(first != NULL)
    {
        
        iPri = first->data;
        for(iCnt = (iPri/2); iCnt <= 1; iCnt--)
        {
            if(iPri % iCnt == 0)
            {
                break;
            }

        }
        
        if(iCnt == 1)
        {
            printf("%d\t",iPri);
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


    

    DisplayPrime(head);
   
    return 0;
}