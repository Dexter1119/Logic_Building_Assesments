//Accept one character from user and convert case of that character.

///////////////////////////////////////////////////////////////////////////
// 
// Name:        A3Q5.c
// Description: Program to Change the Case of Character
// Author:      Pradhumnya Changdev Kalsait
// Assignment:  Assignement 3 Question 4
// Date:        09-05-25
// 
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<ctype.h>
char ConvertCase(char CValue)
{
    if(isupper(CValue))
    {
        printf("The Lower case is:%c",tolower(CValue));
    }
    else{
        printf("The Upper case is:%c",toupper(CValue));
    }
    
}

int main(){
    char cValue = '\0';
    printf("Enter The Character");
    scanf("%c",&cValue);
    ConvertCase(cValue);
    return 0;
}