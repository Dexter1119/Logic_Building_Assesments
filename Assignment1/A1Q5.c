//////////////////////////////////////////////////////////////
// 
// Name:        A1Q5.c
// Description: Program to print n number of * on screen
// Author:      Pradhumnya Changdev Kalsait
// Assignment:  Assignement 1 Question 5
// Date:        09-05-25
// 
////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo1)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo1 ; iCnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int iValue = 0;
    printf("ENter the number of stars you wanna display on screen:");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}