///////////////////////////////////////////////////////////////////
// 
// Name:        A23Q1.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        06/06/25
//
///////////////////////////////////////////////////////////////////

// Input : Q
// Output : q
// Input : m
// Output : M
// Input : 4
// Output : 4
// Input : %
// Output : %

#include<stdio.h>

void Display(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')))
    {
        ch += 32;
        printf("Toggled Character :%c",ch);
    }
    else if(((ch >= 'a') && (ch <= 'z')))
    {
        ch -= 32;
        printf("Toggled Character :%c",ch);
    }
}
int main()
{
    char cValue ='\0';
    printf("Enter The Character :");
    scanf("%c",&cValue);
    
    Display(cValue);

    return 0;

}