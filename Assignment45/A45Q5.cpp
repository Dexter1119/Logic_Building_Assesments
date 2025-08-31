/////////////////////////////////////////////////////////////
//
//  File Name   : A45Q4.cpp
//  Date        : 05/08/2025
//  Description : Assignment on Matrics
//  Author      : Pradhumnya Changdev Kalsait 
//
/////////////////////////////////////////////////////////////



#include<iostream>
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
 
    bool chkSparse()
    {
        int i = 0, j = 0;
        int iCount = 0;
        for(i = 0  ; i < iCol ; i++)
        {
            for( j = 0 ; j < iRow ; j++)
            {
                if(Arr[i][j] == 0)
                {
                    iCount++;
                }
            }
        }
        if(iCount >= (iRow * iCol / 2))
        {
            return true;
        }
        else
        {
            return false;
        }
    }


};

int main()
{
    int iValue1 = 0 , iValue2 = 0 ;
    bool bRet = false;

    cout<<"ENter the number of  rows:";
    cin>>iValue1;

    cout<<"ENter the number of  columns:";
    cin>>iValue2;


    MatrixOpearations mobj(iValue1 , iValue2);

    mobj.Accept();
    mobj.Display();
    bRet = mobj.chkSparse();
    if(bRet == false)
    {
        cout<<" the matrix is not an Sparse matrix";
    }
    else
    {
        cout<<" the matrix is an Sparse matrix";
    }


    return 0;
}