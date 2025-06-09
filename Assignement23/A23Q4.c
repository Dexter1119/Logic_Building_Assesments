///////////////////////////////////////////////////////////////////
// 
// Name:        A23Q4.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        06/06/25
//
///////////////////////////////////////////////////////////////////

// Input : %
// Output : TRUE

// Input : d
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool CheckSymbol(char ch)
{
    
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')) || ((ch >= '0') && (ch <= '9')))
    {
        return false;
    }
    return true;
}
int main()
{
    char cValue ='\0';
    printf("Enter The Character :");
    scanf("%c",&cValue);

    bool bRet = false;
    bRet = CheckSymbol(cValue);

    if(bRet == true)
    {
        printf("The Given Character is Special Symbol");
    }
    else
    {
        printf("The Given Character is not a Special Symbol");
    }


    return 0;

}