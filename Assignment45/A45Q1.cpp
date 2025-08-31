/////////////////////////////////////////////////////////////
//
//  File Name   : A45Q1.cpp
//  Date        : 05/08/2025
//  Description : Assignment on Matrics
//  Author      : Pradhumnya Changdev Kalsait 
//
/////////////////////////////////////////////////////////////



#include<iostream>
#include<stdlib.h>
using namespace std;


class Matrix
{
    protected:
        int **Arr;
        int iRow;
        int iCol;
    public:
    Matrix(int A , int B)
    {
        this->iRow = A;
        this->iCol = B;

//According to the dennis ritchie the multidimensional array is array of array thats why...>
        this -> Arr = new int*[iRow];
       
        for(int i = 0 ; i < iRow; i++)
        {
            Arr[i] = new int[iCol];
        }       
    }

    void Accept()
    {
        int i = 0 , j= 0;
        cout<<"ENter the elements in the Matrix row-wise\n";
        for(i = 0 ; i< iRow ; i++)
        {
            for(j = 0 ; j < iCol ; j++)
            {
                cin>>Arr[i][j];
            }
        }
    }
    void Display()
    {
        int i = 0 , j= 0;
        cout<<"ENtered the elements in the Matrix Are\n";
        for(i = 0 ; i< iRow ; i++)
        {
            for(j = 0 ; j < iCol ; j++)
            {
                cout<<Arr[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    ~Matrix()
    {
        for(int i = 0; i < iRow; i++)
        {
            delete[] Arr[i];
        }

        delete[] Arr;
    }

};


class MatrixOpearations : public Matrix
{
    public :
    MatrixOpearations(int A , int B): Matrix(A,B)
    {
         
    }
 
    void ShowTranspose()
    { 
        int **temp = new int*[iRow];
        for(int s = 0 ; s < iRow ;s++)
        {
            temp[s] = new int[iCol];
        }

        int i = 0 , j= 0 , tr = 0 , tc = 0;
        
        for(i = 0,tc = 0 ; i< iRow,tc < iCol ; i++,tc++)
        {
            for(j = 0,tr = 0 ; j < iCol,tr <iRow ; j++,tr++)
            {
                temp[tr][tc] = Arr[i][j];
            }
        }

        cout<<"THe Transpose of matrix is:\n";
        for(i = 0 ; i< iRow ; i++)
        {
            for(j = 0 ; j < iCol ; j++)
            {
                cout<<temp[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }


};

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iRet = 0;

    cout<<"ENter the number of  rows:";
    cin>>iValue1;

    cout<<"ENter the number of  columns:";
    cin>>iValue2;


    MatrixOpearations mobj(iValue1 , iValue2);

    mobj.Accept();
    mobj.Display();
    mobj.ShowTranspose();


    
    


    return 0;
}