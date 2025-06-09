///////////////////////////////////////////////////////////////////
// 
// Name:        A23Q1.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        06/06/25
//
///////////////////////////////////////////////////////////////////

// Print ASCII Table
#include<stdio.h>

void DisplayASCII()
{

    int iCnt = 0;
    char ch = '\0';
    printf("==========================\n");
    printf("       ASCII Table\n");
    printf("==========================\n");
    printf("Dex\tChar\tHex\n");
    printf("==========================\n");
    
    for (iCnt = 0; iCnt < 128; iCnt++)
    {
        ch = iCnt;
        printf("|%d\t",ch);
        printf("|%c\t",ch);
        printf("|%x\t|",ch);
        printf("\n");
    }
    printf("==========================\n");
}
int main()
{
    DisplayASCII();
    
    return 0;
}