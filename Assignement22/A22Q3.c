///////////////////////////////////////////////////////////////////
// 
// Name:        A22Q3.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        06/06/25
//
///////////////////////////////////////////////////////////////////

// Input : 7
// Output : TRUE
// Input : d
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>
bool checkDigit(char ch)
{
    bool bResult = false;
    if((ch >= '0') && (ch <= '9') )
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
        printf("It is a Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }

    
    return 0;
}