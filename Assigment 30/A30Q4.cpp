////////////////////////////////////////////////////////////////
//
// File :        A30Q4.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////


/*
   7th & 8th & 9th bit is On or OFF.
*/

#include<iostream>
using namespace std;


typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask = 0x00000380;
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
        cout<<" 7th & 8th & 9th bit is On "<<endl;  
    }
    else
    {
        cout<<" 7th & 8th & 9th bit is Off"<<endl;     
    }

    return 0;
}