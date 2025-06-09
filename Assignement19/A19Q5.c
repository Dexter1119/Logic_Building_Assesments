///////////////////////////////////////////////////////////////////
// 
// Name:        A19Q5.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////

// Input : N : 6
// NO: 12
// Elements : 85 11 3 15 11 111
// Output : 0

// Input : N : 6
// NO: 66
// Elements : 85 66 3 66 93 88
// Output : 2


#include<stdio.h>
#include<stdlib.h>


int Frequency11(int* Arr , int iSize , int iNo)
{
    if(NULL == Arr)
    {
        return -1 ;
    }

    int iCnt = 0 , iCount = 0 ;
    
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] ==  iNo ) )
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

    int iNo = 0;
    printf("ENter the number you wanna count:");
    scanf("%d",&iNo);

    int iRet = 0;
    iRet = Frequency11(iPtr , iSize, iNo);
    if(iRet == -1)
    {
        printf("The Memory Location not found");
        return -1;
    }
    printf("frequency of %d is: %d", iNo,iRet );

    free(iPtr);
    
    return 0;
}

