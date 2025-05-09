//////////////////////////////////////////////////////////////
// 
// Name:        A1Q2.c
// Description: Program to Print Marvellous 5 times On Screen
// Author:      Pradhumnya Changdev Kalsait
// Assignment:  Assignement 1 Question 2
// Date:        09-05-25
// 
//////////////////////////////////////////////////////////////

#include<stdio.h>



////////////////////////////////////////////////
// 
// Prototype:   Display()    
// Description: Function to Print Marvellous
// Input:       void
// Output:      void
// 
/////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= 5; iCnt++)
    {
        printf("Marvellous\n");
    }
}
int main()
{
    Display();
    return 0;
}
