////////////////////////////////////////////////////////////////
//
// File :        A30Q3.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////


/*
   7th & 15th & 21st , 28th bit is On or OFF.
*/

#include<iostream>
using namespace std;


typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask = 0X08104040;
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
        cout<<" 7th & 15th & 21st , 28th bit is On"<<endl;  
    }
    else
    {
        cout<<" 7th & 15th & 21st , 28th bit is Off"<<endl;     
    }

    return 0;
}