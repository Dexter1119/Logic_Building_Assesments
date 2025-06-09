///////////////////////////////////////////////////////////////////
// 
// Name:        A18Q1.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////

// Input : N : 6
// Elements : 85 66 3 80 93 88
// Output : 53 (234 - 181)

#include<stdio.h>
#include<stdlib.h>

int Difference(int* Arr , int iSize)
{
    if(NULL == Arr)
    {
        return -1;
    }

    int iCnt = 0 ,iSumE = 0, iSumO = 0 , iDiff = 0;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumE += Arr[iCnt];
        }
        else
        {
            iSumO += Arr[iCnt];
        }
    }

    iDiff = iSumE - iSumO ;
    if(iDiff < 0)
    {
        iDiff = -iDiff;
    }
    return iDiff;

}
int main()
{
    int iSize = 0, iCnt = 0;
    int * iPtr = NULL;

    printf("Enter the numbers you wanna Enter :");
    scanf("%d", &iSize);

    iPtr = (int *)malloc(iSize * sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("ENter the elements :\n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    int iRet = 0;
    iRet = Difference(iPtr,iSize);
    if(iRet == -1)
    {
        printf("The Memory Location not found");
        return -1;
    }
    printf("The Differnce Between odd and Even Number is : %d", iRet);
    
    free(iPtr);
    
    return 0;
}

