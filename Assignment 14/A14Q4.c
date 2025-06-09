///////////////////////////////////////////////////////////////////
// 
// Name:        A14Q3.c
// Description: Problems on Patern Printing  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////


// Input : iRow = 5 iCol = 5
// Output :  1 2 3 4 5
//          -1 -2 -3 -4 -5
//           1 2 3 4 5
//          -1 -2 -3 -4 -5
//           1 2 3 4 5

#include<stdio.h>


void Pattern(int iRow , int iCol)
{
    
    int i = 0 , j = 0, iNo = 0;

    for(i = 1 ; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            for(j = 1 , iNo = 1; j <= iCol ; j++,iNo++)
            {
                printf("%d\t",iNo);
            }
            printf("\n");
        }
        else
        {
            for(j = 1 ,iNo = -1; j <= iCol ; j++,iNo--)
            {
                printf("%d\t",iNo);
            }
            printf("\n");
        }
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