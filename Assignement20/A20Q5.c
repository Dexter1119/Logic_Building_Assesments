///////////////////////////////////////////////////////////////////
// 
// Name:        A20Q5.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        06/06/25
//
///////////////////////////////////////////////////////////////////

// Input : N : 6
// Elements : 15 66 3 70 10 88
// Output : 45

// Input : N : 6
// Elements : 44 66 72 70 10 88
// Output : 0

#include<stdio.h>
#include<stdlib.h>




int ProductOdd(int *Arr, int iSize)
{
    if(NULL == Arr)
    {
        return -1;
    }

    int iCnt = 0 ;
    int iProduct = 1;
    
    
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }
    
    return iProduct;

}
int main()
{
    int iSize = 0 , iCnt = 0;
    int* iPtr = NULL;

    printf("ENter the number of elements :");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize * sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("ENter the elements:\n");
    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    
    int iRet = 0;
    iRet = ProductOdd(iPtr , iSize);
    if(iRet == -1)
    {
        printf("The Memory Location not found");
        return -1;
    }
    printf("Product of all odd numbers is : %d\n", iRet);

    
    
    free(iPtr);
    
    return 0;
}

