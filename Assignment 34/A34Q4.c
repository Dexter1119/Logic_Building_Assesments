/////////////////////////////////////////////////////////////////
//
// Name :        A34Q4.c
// Description : Assessment On Linked List
// Author :      Pradhumnya Changedev Kalsait
// Date :        26/06/25
//
/////////////////////////////////////////////////////////////////


/*
    Input linked list : |110|->|230|->|320|->|240|

    Output : 320
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

int Maximum( PNODE first)
{
     if(NULL == first)
    {
        return -1;
    }

    int iMax =  0;

    iMax = first->data;
    while(first != NULL)
    {
       if(iMax < first->data)
       {
            iMax = first-> data;
       }

       first = first->next;
    }

    return iMax;

}
int main()
{
    PNODE head = NULL;
    int iRet = 0;
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


    

    Display(head);
    iRet = Maximum(head);
    if(iRet == -1)
    {
        printf("Linked List Doesnt exists");
        return -1;
    }
    printf("The Maximum element in linked list is:%d",iRet);

    return 0;
}