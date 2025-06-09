///////////////////////////////////////////////////////////////////
// 
// Name:        A22Q4.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        06/06/25
//
///////////////////////////////////////////////////////////////////

// Input : g
// Output : TRUE
// Input : D
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>
bool checkDigit(char ch)
{
    bool bResult = false;
    if((ch >= 'a') && (ch <= 'z') )
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
    bRet = checkDigit(cValue);
    if(bRet == true)
    {
        printf("It is a small letter\n");
    }
    else
    {
        printf("It is not a small letter\n");
    }

    
    return 0;
}