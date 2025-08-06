/////////////////////////////////////////////////////////////
//
//  File Name   : A36Q3.cpp
//  Date        : 29/07/2025
//  Description : Assignment on Data Structure 
//  Author      : Pradhumnya Changdev Kalsait 
//
/////////////////////////////////////////////////////////////

/*
Product ELements

Input linked list : |11|->|20|->|32|->|41|
Output : 1 2 6 4
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

    void DisplayProduct()
    {

        PNODE temp = first;
        int iDigit = 0;
        int iProduct = 0;
        int iNo = 0;

        while(temp != NULL)
        {
            iNo = temp ->data;
            iProduct = 1; 
            while(iNo > 0)
            {
                if(iNo < 0)
                {
                    iNo = -iNo;
                }

                iDigit = iNo % 10;

                if(iDigit != 0)
                {
                    iProduct *= iDigit;
                }
                
                iNo = iNo / 10;
            }
            cout<<iProduct<<"\t";
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

    sobj.DisplayProduct();
    

    

    

    


    return 0;
}