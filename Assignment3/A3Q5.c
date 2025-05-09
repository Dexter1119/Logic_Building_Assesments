
////////////////////////////////////////////////////////////////////////////
// 
// Name:        A3Q5.c
// Description: Program to chceck whether the character is vowel or not
// Author:      Pradhumnya Changdev Kalsait
// Assignment:  Assignement 3 Question 5
// Date:        09-05-25
// 
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<ctype.h>
#define TRUE 1
#define FALSE -1

int IsVowel(char CValue)
{
    CValue = toupper(CValue);
    if((CValue == 'A') || (CValue == 'E') || (CValue == 'I') || (CValue == 'O') || (CValue == 'U'))
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
    char cValue = '\0';
    printf("Enter the Character :");
    scanf("%c",&cValue);
    int iRet = 0 ;
    iRet = IsVowel(cValue);
    if(iRet == TRUE ){
        printf("The Character is vowel");
    }
    else{
        printf("The %c is consonants",cValue);
    }


    return 0;
}