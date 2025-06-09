///////////////////////////////////////////////////////////////////
// 
// Name:        A23Q3.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        06/06/25
//
///////////////////////////////////////////////////////////////////

// Input : Q
// Output : Q R S T U V W X Y Z

// Input : m
// Output : m l k j i h g f e d c b a

// Input : 8
// Output :

#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;
    if(((ch >= 'A') && (ch <= 'Z')))
    {
        for(  ; ch <= 'Z' ;ch++)
        {
            printf("%c\t",ch);
        }
    }
    else if(((ch >= 'a') && (ch <= 'z')))
    {
        for(  ; ch <= 'z' ;ch++)
        {
            printf("%c\t",ch);
        }
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