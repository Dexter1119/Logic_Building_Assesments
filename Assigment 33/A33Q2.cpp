////////////////////////////////////////////////////////////////
//
// File :        A33Q2.cpp
// Description : Assigenments On Bitwise Operator
// Author :      Pradhumnya Changdev Kalsait
// Date:         17/06/25
//
////////////////////////////////////////////////////////////////


/*
    program which accept two numbers from user and display position
    of common ON bits from that two numbers.

    Input : 10 15       (1010 1111)

    Output : 2 4

*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;
void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iCount = 0;
    while((iNo1 > 0) || (iNo2 > 0))
    {
        if( ((iNo1 & 1) == 1)  && ( (iNo2 & 1) == 1 ))
        {
            cout<<iCount<<"\t";

        }
        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1;
        iCount++;
    }

}
int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;

    cout<<"ENter the number1:";
    cin>>iValue1;

    cout<<"ENter the number2:";
    cin>>iValue2;

    CommonBits(iValue1, iValue2);
    

    return 0; 
}