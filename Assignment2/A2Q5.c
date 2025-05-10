////////////////////////////////////////////////////////////////
// 
// Name:        A2Q5.c
// Description: Program to check whether number is even or odd
// Author:      Pradhumnya Changdev Kalsait
// Assignment:  Assignement 2 Question 5
// Date:        09-05-25
// 
////////////////////////////////////////////////////////////////



#include<stdio.h>

#define TRUE 1
#define FALSE -1


int ChkEven(int iNo1)
{
    if(iNo1 % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;

    printf("ENter the Number :");
    scanf("%d",&iValue);

    int iRet = 0;
    iRet = ChkEven(iValue);

    if(iRet == TRUE){
        printf("%d is Even",iValue);
    }
    else{
        printf("%d is Odd",iValue);
    }



    return 0;
}
