/////////////////////////////////////////////////////////////
//
//  File Name   : A45.cpp
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
        for(int i = 0; i < iCol; i++)
        {
            delete[] temp[i];
        }
        delete[] temp;
    }
    void RevRows()
    {
        
        int temp = 0;
        int i = 0 , j= 0;
        int iStart = 0 , iEnd = 0;
        
        for(i = 0  ; i < iRow ; i++)
        {
            iStart = 0;
            iEnd = iCol - 1 ;
            while(iStart < iEnd)
            {
                temp = Arr[i][iStart];
                Arr[i][iStart] = Arr[i][iEnd];
                Arr[i][iEnd] = temp;

                iStart++;
                iEnd--;
            }
        }
    }
    void RevColumns()
    {
        
        int temp = 0;
        int i = 0 , j= 0;
        int iStart = 0 , iEnd = 0;
        
        for(i = 0  ; i < iCol ; i++)
        {
            iStart = 0;
            iEnd = iRow - 1 ;
            while(iStart < iEnd)
            {
                temp = Arr[iStart][i];
                Arr[iStart][i] = Arr[iEnd][i];
                Arr[iEnd][i] = temp;

                iStart++;
                iEnd--;
            }
        }
    }
    bool chkIdentity()
    {
        int i = 0, j = 0;
        bool bFlag = true;
        for(i = 0  ; i < iCol ; i++)
        {
            for( j = 0 ; j < iRow ; j++)
            {
                if(((i == j) && (Arr[i][j] != 1)))
                {
                    bFlag = false;
                    break;
                }
                else if(((i != j) && (Arr[i][j] != 0)))
                {
                    bFlag = false;
                    break;
                }
            }
        }
        return bFlag;
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

