///////////////////////////////////////////////////////////////////
// 
// Name:        A12Q4.c
// Description: Problems on Patern Printing  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////


#include<stdio.h>


void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j % 2 == 0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
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