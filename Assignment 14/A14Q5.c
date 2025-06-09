///////////////////////////////////////////////////////////////////
// 
// Name:        A14Q5.c
// Description: Problems on Patern Printing  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////


// Input : iRow = 4 iCol = 4
// Output : 1 2 3 4
//          2 3 4 5
//          3 4 5 6
//          4 5 6 7

#include<stdio.h>


void Pattern(int iRow , int iCol)
{   
    int i = 0 , j = 0, iNo = 0;

    for(i = 1, iNo = 1  ; i <= iRow; i++ , iNo = i)
    {
        for( j = 1; j <= iCol ;j++,iNo++)
        {
            printf("%d\t", iNo);
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