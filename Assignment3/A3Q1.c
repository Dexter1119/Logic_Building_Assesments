
//////////////////////////////////////////////////////////////////////////
// 
// Name:        A3Q1.c
// Description: Program to print the n even numbers
// Author:      Pradhumnya Changdev Kalsait
// Assignment:  Assignement 3 Question 1
// Date:        09-05-25
// 
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void PrintEven(int iNo)
{
    if(iNo <= 0){
        return;
    }
    else{
        int iCnt = 0;
        for (iCnt = 2 ; iCnt <= 2 * iNo; iCnt = iCnt + 2 ){
            printf("%d \t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("ENter the Number:");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}
