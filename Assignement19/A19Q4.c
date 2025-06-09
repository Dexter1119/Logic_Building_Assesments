///////////////////////////////////////////////////////////////////
// 
// Name:        A19Q4.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////

// Input : N : 6
// Elements : 85 66 3 15 93 88
// Output : 0

// Input : N : 6
// Elements : 85 11 3 15 11 111
// Output : 2


#include<stdio.h>
#include<stdlib.h>


int Frequency11(int* Arr , int iSize)
{
    if(NULL == Arr)
    {
        return -1 ;
    }

    int iCnt = 0 , iCount = 0 ;
    
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] ==  11 ) )
        {
            iCount++;
        }
    }
    return iCount;

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
    iRet = Frequency11(iPtr , iSize);
    if(iRet == -1)
    {
        printf("The Memory Location not found");
        return -1;
    }
    printf("frequency of 11 is: %d", iRet );

    free(iPtr);
    
    return 0;
}

