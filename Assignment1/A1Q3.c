//////////////////////////////////////////////////////////////
// 
// Name:        A1Q3.c
// Description: Program to Print 5 To 1 On Console
// Author:      Pradhumnya Changdev Kalsait
// Assignment:  Assignement 1 Question 3
// Date:        09-05-25
// 
//////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int iCnt = 0;
     iCnt = 5;
    while(iCnt > 0 ){
        printf("%d\n",iCnt);
        iCnt--;
    }
}
int main()
{
    Display();
    return 0;
}