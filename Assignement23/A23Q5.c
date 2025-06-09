///////////////////////////////////////////////////////////////////
// 
// Name:        A23Q5.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        06/06/25
//
///////////////////////////////////////////////////////////////////

// Input : A
// Output : Decimal 65
//          Octal 0101
//          Hexadecimal 0X41


#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
    printf("Decimal:\t%d\n",ch);
    printf("Octal:\t%o\n",ch);
    printf("HexaDecimal:\t%x\n",ch);
    
}
int main()
{
    char cValue ='\0';
    printf("Enter The Character :");
    scanf("%c",&cValue);

    Display(cValue);


    return 0;

}