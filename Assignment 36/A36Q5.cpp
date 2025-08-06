/////////////////////////////////////////////////////////////
//
//  File Name   : A36Q5.cpp
//  Date        : 29/07/2025
//  Description : Assignment on Data Structure 
//  Author      : Pradhumnya Changdev Kalsait 
//
/////////////////////////////////////////////////////////////

/*
smallest digit

Input linked list : |11|->|250|->|532|->|415|
Output : 1 0 2 1
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

    void DisplayMax()
    {

        PNODE temp = first;
        int iDigit = 0;
        int iMax = 0;
        int iNo = 0;

        while(temp != NULL)
        {
            iNo = temp ->data;
            if(iNo < 0)
            {
                iNo = -iNo;
            }

            iMax = 0;

            while(iNo > 0)
            {
                iDigit = iNo % 10;

                if(iMax < iDigit)
                {
                    iMax = iDigit;
                }

                iNo = iNo / 10;
            }
            cout<<iMax<<"\t";
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

    sobj.DisplayMax();
    

    

    

    


    return 0;
}