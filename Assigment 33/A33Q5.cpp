////////////////////////////////////////////////////////////////
//
// File :        A33Q5.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////


/*
    a program which accept one number from user and range of
    positions from user. Toggle all bits from that range.

    Input : 897 9 13

    Toggle all bits from position 9 to 13 of input number ie 879.

*/

#include<iostream>
using namespace std;


typedef unsigned int UINT;
int ChangeBit(UINT iNo , int iStart, int iEnd) 
{
    if(iStart < 1 || iStart > 32 || iEnd < 1 || iEnd > 32 || iStart > iEnd)
    {
        return -1;
    }

    UINT iMask = 0;
    UINT iResult = 0;
    
    while(iEnd >= iStart)
    {
        iMask = iMask | (1 << iEnd-2);
        iEnd--;
    }
    cout<<std::hex<<iMask;

    iResult = iNo ^ iMask;
    return iResult;
    
}

int main()
{
    UINT iValue = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    UINT iRet = 0;
    
    cout<<"ENter the element:";
    cin>>iValue;

    cout<<"ENter the start:";
    cin>>iValue1;

    cout<<"ENter the end:";
    cin>>iValue2;

    iRet = ChangeBit(iValue,iValue1,iValue2);
    cout<<"The Result is :"<<iRet;    

    return 0;
}