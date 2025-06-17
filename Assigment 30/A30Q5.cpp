////////////////////////////////////////////////////////////////
//
// File :        A30Q5.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////


/*
   first and last bit is On or OFF.
*/

#include<iostream>
using namespace std;


typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask = 0x80000001;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return (iResult == iMask);

}

int main()
{
    UINT iValue = 0;
    bool bREt = false;

    cout<<"Enter the Number:";
    cin>>iValue;

    bREt = CheckBit(iValue);
    if(bREt == true)
    {
        cout<<"first and last bit is On "<<endl;  
    }
    else
    {
        cout<<" first and last bit is Off "<<endl;     
    }

    return 0;
}