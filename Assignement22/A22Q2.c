///////////////////////////////////////////////////////////////////
// 
// Name:        A22Q2.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        06/06/25
//
///////////////////////////////////////////////////////////////////

// Input : F
// Output : TRUE
// Input : d
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>
bool checkCapital(char ch)
{
    bool bResult = false;
    if((ch >= 'A') && (ch <= 'Z') )
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
    bRet = checkCapital(cValue);
    if(bRet == true)
    {
        printf("It is a Capital letter\n");
    }
    else
    {
        printf("It is not a Capital letter\n");
    }

    
    return 0;
}