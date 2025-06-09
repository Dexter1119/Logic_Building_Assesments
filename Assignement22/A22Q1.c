///////////////////////////////////////////////////////////////////
// 
// Name:        A22Q1.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        06/06/25
//
///////////////////////////////////////////////////////////////////

// Input : F
// Output : TRUE
// Input : &
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>
bool checkCharacter(char ch)
{
    bool bResult = false;
    if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
    {
        bResult = true;
    }
    else
    {
        bResult = false;
    }
    return bResult;
}
int main()
{
    char cValue = '\0';
    printf("ENter the character :");
    scanf(" %c",&cValue);

    bool bRet = false;
    bRet = checkCharacter(cValue);
    if(bRet == true)
    {
        printf("It is a character");
    }
    else
    {
        printf("It is not a character");
    }
    return 0;
}