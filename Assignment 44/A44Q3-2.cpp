/////////////////////////////////////////////////////////////
//
//  File Name   : A44Q3-2.cpp
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
 
    int MaxDiagonal()
    {
        if(iRow != iCol)
        {
            cout<<"INvalid Number of Column and rows";
            return -1;
        }
        int iMax = 0;
        int i = 0 , j= 0;

        iMax = Arr[0][0];
        for(i = 0 ; i< iRow ; i++)
        {
            for(j = 0 ; j < iCol ; j++)
            {
                if((i == j) && (Arr[i][j] > iMax))
                {
                    iMax = Arr[i][j];
                    
                } 
                if((i + j == iCol - 1) && (Arr[i][j] > iMax))
                {
                    iMax = Arr[i][j];
                    
                }   
            }            
        }
        return iMax;
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
    iRet = mobj.MaxDiagonal();
    cout<<"The Maximum among diagonal is: "<<iRet<<endl;

    


    return 0;
}