
//////////////////////////////////////////////////////////////
// 
// Name:        A2Q4.c
// Description: Program to print the number n times
// Author:      Pradhumnya Changdev Kalsait
// Assignment:  Assignement 2 Question 4
// Date:        09-05-25
// 
////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo1 ,int frequency)
{
    int iCnt = 0;
     if(frequency < 0)
    {
        frequency = -frequency;
    }
    for(iCnt = 1; iCnt <= frequency; iCnt++)
    {
        printf("%d \t",iNo1);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf ("Enter the number you wanna print:");
    scanf("%d",&iValue1);
    printf ("Enter the frequency of that number you wanna print:");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0;
}
