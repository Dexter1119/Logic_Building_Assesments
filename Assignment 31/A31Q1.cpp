////////////////////////////////////////////////////////////////
//
// File :        A31Q1.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////


/*

    Number after 7th bit off is
    Input : 79
    Output : 15

*/

#include<iostream>
using namespace std;

int OffBit(int iNo)
{
    int iMask = 1;
    int iResult = 0;

    iMask = iMask << (7-1);
    iMask = ~iMask;
    

    iResult = iNo & iMask;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"ENter the number:";
    cin>>iValue;

    iRet =OffBit(iValue);
    cout<<"Number after 7th bit off is:"<<iRet<<endl;

    return 0;
}