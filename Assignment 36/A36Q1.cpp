/////////////////////////////////////////////////////////////
//
//  File Name   : A36Q1.cpp
//  Date        : 29/07/2025
//  Description : Assignment on Data Structure 
//  Author      : Pradhumnya Changdev Kalsait 
//
/////////////////////////////////////////////////////////////

/*
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : |11|->|82|->|71|->|14|->|6|->|98|
*/
#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    node* next;
}NODE,*PNODE,**PPNODE;

class SinglyLL
{
    private :
        PNODE first;
        int iCount;
    public:

    SinglyLL()
    {
        this -> first = NULL;
        this -> iCount = 0;

    }
    void InsertFirst(int no)
    {
        PNODE newn = NULL;
        newn = new NODE();
        newn->data = no;
        newn->next = NULL;

        if(first == NULL)
        {
            first = newn;
        }
        else
        {
            newn->next = first;
            first = newn;
        }
        iCount++;
    }
    void InsertLast(int no)
    {
        PNODE newn = NULL;
        newn = new NODE();
        newn->data = no;
        newn->next = NULL;

        if(first == NULL)
        {
            first = newn;
        }
        else
        {
            PNODE temp = first;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
        }
        iCount++;
    }
    void Display()
    {
        PNODE temp = first;
        while(temp != NULL)
        {
            cout <<"|"<<temp->data << "|->";
            temp = temp->next;
        }
        cout<<"NULL\n";

    }
    int Count()
    {
        return iCount;
    }

    void ReverseEle()
    {
        PNODE temp = first;
        int ReviNo = 1;
        int iDigit = 0;
        int iNo = 0;

        while(temp != NULL)
        {
            iNo = temp ->data;
            ReviNo = 0; 
            while(iNo > 0)
            {
                iDigit = iNo % 10;
                ReviNo = ReviNo * 10 + iDigit;
                iNo = iNo / 10;
            }
            temp -> data = ReviNo;
            temp = temp -> next;
        }
    }



};
int main()
{

    SinglyLL sobj ;

    sobj.InsertFirst(11);
    sobj.InsertLast(21);
    sobj.InsertLast(51);
    sobj.InsertLast(101);


    sobj.Display();
    

    sobj.ReverseEle();

    sobj.Display();



    return 0;
}