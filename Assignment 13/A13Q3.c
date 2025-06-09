///////////////////////////////////////////////////////////////////
// 
// Name:        A13Q3.c
// Description: Problems on Patern Printing  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////


// Input : iRow = 3 iCol = 5
// Output : A A A A A
//          B B B B B
//          C C C C C


#include<stdio.h>


void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
    char ch = '\0' ;

    for(i = 1 ,ch = 'A'; i <= iRow; i++,ch++)
    {
        for(j = 1  ; j <= iCol; j++)
        {
           printf("%c\t",ch);
        }
        printf("\n");
    }
}

int main()
{

    int iValue1 = 0 , iValue2 = 0;
    printf("ENter the number of rows : \n");
    scanf("%d",&iValue1);

    printf("ENter the number of col : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);


    return 0;
}