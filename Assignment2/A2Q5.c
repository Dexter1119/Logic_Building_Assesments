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
#include<stdBool.h>
#define TRUE 1
#define FALSE -1


bool ChkEven(int iNo1)
{
    if(iNo1 % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;

    printf("ENter the Number :");
    scanf("%d",&iValue);

    bool bRet = 0;
    bRet = ChkEven(iValue);

    if(bRet == true){
        printf("%d is Even",iValue);
    }
    else{
        printf("%d is Odd",iValue);
    }



    return 0;
}