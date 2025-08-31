/////////////////////////////////////////////////////////////
//
//  File Name   : A44.cpp
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

    int SumDiagonal()
    {

        int iSum = 0;
        int i = 0 , j= 0;

        
        for(i = 0 ; i< iRow ; i++)
        {
            for(j = 0 ; j < iCol ; j++)
            {
                if(i == j)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum;
    }
    int CountFrequency(int no)
    {
        int iCount = 0;
        int i = 0 , j= 0;

        
        for(i = 0 ; i< iRow ; i++)
        {
            for(j = 0 ; j < iCol ; j++)
            {
                if(Arr[i][j] == no)
                {
                    iCount++;
                }
            }
        }
        return iCount;
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
    void AddColumn()
    {
        int iSum = 0;
        int i = 0 , j= 0;
        cout<<"The Sum of Columns is :\n";
        for(j = 0 ; j < iCol ; j++)
        {
            for( i = 0,iSum = 0; i< iRow ; i++)
            {
                iSum = iSum + Arr[i][j];
            }  
            cout<<iSum<<"\t"; 
        }
    }
    void SwapRows()
    {
        
        int temp = 0;
        int i = 0 , j= 0;
        
        for(i = 0 ; i < iRow-1 ; i = i + 2)
        {
            for(j = 0; j < iCol ; j++)
            {
                temp = Arr[i][j];
                Arr[i][j] = Arr[i+1][j];
                Arr[i+1][j] = temp; 
            }
           
        }
    }


};

