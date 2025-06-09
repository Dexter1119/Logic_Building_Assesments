///////////////////////////////////////////////////////////////////
// 
// Name:        A13Q4.c
// Description: Problems on Patern Printing  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////


// Input : iRow = 4 iCol = 5
// Output : 4 4 4 4 4
//          3 3 3 3 3
//          2 2 2 2 2
//          1 1 1 1 1


#include<stdio.h>


void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
    
    for(i = iRow ; i >= 1; i--)
    {
        for(j = iCol  ; j >= 1; j--)
        {
           printf("%d\t",j);
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