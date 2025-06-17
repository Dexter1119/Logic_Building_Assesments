////////////////////////////////////////////////////////////////
//
// File :        A33Q1.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////


/*
    program which accept one number from user and count number of
    ON (1) bits in it without using % and / operator.

    Input : 11
    Output : 3
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;
int CountOne( UINT iNo)
{
    UINT iCount = 0;
    while(iNo > 0)
    {
        iCount = iCount + (iNo & 1);
        iNo =iNo >> 1;
    }
    return iCount;

}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"ENter the number:";
    cin>>iValue;

    iRet = CountOne(iValue);
    cout<<"The Number of One's are :"<<iRet;

    return 0; 
}