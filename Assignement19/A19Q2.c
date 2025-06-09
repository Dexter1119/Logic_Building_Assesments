///////////////////////////////////////////////////////////////////
// 
// Name:        A19Q2.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////

// Input : N : 7
// Elements : 85 66 3 80 93 88 90
// Output : 1 (4 -3)

#include<stdio.h>
#include<stdlib.h>

int Frequency(int* Arr , int iSize)
{
    if(NULL == Arr)
    {
        return -1 ;
    }

    int iCnt = 0 , iCount1 = 0 , iCount2 = 0 ; iDiff = 0;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] % 2 == 0) )
        {
            iCount1++;
        }
        else
        {
            iCount2++;
        }
    }
    
    iDiff = iCount1 - iCount2 ;
    if(iDiff < 0)
    {
        iDiff = -iDiff;
    }
    return iDiff;
    

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
    iRet = Frequency(iPtr , iSize);
    if(iRet == -1)
    {
        printf("The Memory Location not found");
        return -1;
    }
    printf("difference between frequency of even number and odd numbers: %d", iRet );

    free(iPtr);
    
    return 0;
}

