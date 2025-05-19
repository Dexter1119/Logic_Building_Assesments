////////////////////////////////////////////////////////////////////
//
// Name:        A6Q1.c
// Description: Program which return the class of Number.
// Author:      Pradhumnya Changdev Kalsait.
// Date:        16/05/2025
// 
/////////////////////////////////////////////////////////////////////


#include<stdio.h>
void Number(int iNo)
{
    
    if(iNo <= 50)
    {
        printf("Small Number");
    }
    else if(iNo > 50 && iNo <= 100)
    {
        printf("Medium Number");
    }
    else if(iNo > 100)
    {
        printf("Small Number");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);
    Number(iValue);
    return 0;
}