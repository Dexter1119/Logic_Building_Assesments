///////////////////////////////////////////////////////////////////
// 
// Name:        A11Q1.c
// Description: Problems Pattern Printing
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>


void Pattern(int iNo)
{
    char ch = 'A';
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
}

int main()
{

    int iValue = 0;
    printf("ENter the number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);


    return 0;
}