/////////////////////////////////////////////////////////////////
//
// Name :        A35Q2.c
// Description : Assessment On Linked List
// Author :      Pradhumnya Changedev Kalsait
// Date :        27/06/25
//
/////////////////////////////////////////////////////////////////


/*
    Input linked list : |11|->|20|->|32|->|41|
    
    Output : 52  
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

int AddEven( PNODE first)
{
   
    if(NULL == first)
    {
        return -1 ;
    }

    int iTemp = 0;
    int iCnt = 0;
    int iSum = 0;

   
    while(first != NULL)
    {
        
        iTemp = first->data;
        if(iTemp % 2 == 0)
        {
            iSum = iSum + iTemp;
        }

        first = first->next;
    }
    return iSum;


}
int main()
{
    PNODE head = NULL;
    int iCnt = 0;
    int iSize = 0;
    int iEle = 0;
    int iRet = 0;
   

    printf("Enter the number of elements that you wanna add in Linked List:");
    scanf("%d",&iSize);

    printf("Enter the Elements:\n");
    for(iCnt = 1; iCnt <= iSize ; iCnt++)
    {
        scanf("%d",&iEle);
        InsertLast(&head,iEle);
    }


    

    Display(head);


    iRet = AddEven(head);
    if(iRet == -1)
    {
        printf("Linked List Doesnt exists");
        return -1;
    }
    printf("The Sum of all even elements in linked list is:%d",iRet);
   
    return 0;
}