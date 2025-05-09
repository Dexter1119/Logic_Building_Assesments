//////////////////////////////////////////////////////////
// 
// Name:        A1Q1.c
// Description: Program to Divide Two Integers
// Author:      Pradhumnya Changdev Kalsait
// Assignment:  Assignement 1 Question 1
// Date:        09-05-25
// 
//////////////////////////////////////////////////////////


#include<stdio.h>
#define ERR_INVALID_INPUT -1


/////////////////////////////////////////////////
// 
// Prototype:   float Divide(int  , int i)     
// Description: Function to Divide Two Integers
// Input:       int int 
// Output:      float
// 
/////////////////////////////////////////////////
float Divide(int iNo1 , int iNo2)
{
    float fAns = 0.0f;
    if(iNo2 == 0)
    {
        return ERR_INVALID_INPUT;
    }
    else
    {
        fAns = (float)iNo1 / (float)iNo2 ; //Business Logic
        return fAns; 
    }
}
int main()
{
    int iValue1 = 15 ,iValue2 = 5;
    float fRet = 0.0f;
    fRet = Divide(iValue1,iValue2);
    printf("The Division is :%.2f" , fRet);

    return 0;
}