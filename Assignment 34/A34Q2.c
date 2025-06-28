/////////////////////////////////////////////////////////////////
//
// Name :        A34Q2.c
// Description : Assessment On Linked List
// Author :      Pradhumnya Changedev Kalsait
// Date :        26/06/25
//
/////////////////////////////////////////////////////////////////


/*
    Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
    Input element : 30

    Output : 6
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

int SearchLastOcc( PNODE first , int iNo )
{
    if(NULL == first)
    {
        return -1;
    }
    int iTrace = 0;
    int iCnt = 0;

    while(first != NULL)
    {
        iCnt++;
        if((first)-> data == iNo)
        {
            iTrace = iCnt;
        }
        first = first->next;
    }

    return iTrace;

}
int main()
{
    PNODE head = NULL;
    int iRet = 0;
    int iCnt = 0;
    int iSize = 0;
    int iEle = 0;
    int iValue1 = 0;

    printf("Enter the number of elements that you wanna add in Linked List:");
    scanf("%d",&iSize);

    printf("Enter the Elements:\n");
    for(iCnt = 1; iCnt <= iSize ; iCnt++)
    {
        scanf("%d",&iEle);
        InsertLast(&head,iEle);
    }


    printf("ENter the number that you wanna search its first Occurance:");
    scanf("%d",&iValue1);
    

    Display(head);
    iRet = SearchLastOcc(head,iValue1);
    if(iRet == -1)
    {
        printf("Linked List Doesnt exists");
        return -1;
    }
    printf("The First Occurance of %d is : %d",iValue1,iRet);

    return 0;
}