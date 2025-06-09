///////////////////////////////////////////////////////////////////
// 
// Name:        A21Q3.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        06/06/25
//
///////////////////////////////////////////////////////////////////

// Input : N : 6
// Elements : 85 66 3 66 93 88
// Output : 3


#include<stdio.h>
#include<stdlib.h>




int MinMaxDiff(int *Arr, int iSize)
{
    if(NULL == Arr)
    {
        return -1;
    }

    int iCnt = 0 ;
    int iMin = 0 ;
    int iMax = 0 ; 
    int iDiff = 0;
    
    iMin = Arr[0]; // handle the number < 0
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        else if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        
    }
    
    iDiff = iMax - iMin ;
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
    iRet = MinMaxDiff(iPtr , iSize);
    if(iRet == -1)
    {
        printf("The Memory Location not found");
        return -1;
    }
    printf("Difference between largest and smallest number is : %d\n", iRet);

    
    
    free(iPtr);
    
    return 0;
}

