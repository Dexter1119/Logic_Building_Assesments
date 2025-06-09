///////////////////////////////////////////////////////////////////
// 
// Name:        A19Q3.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////

// Input : N : 6
// Elements : 85 66 11 80 93 88
// Output : 11 is present

// Input : N : 6
// Elements : 85 66 3 80 93 88
// Output : 11 is absent


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check11(int* Arr , int iSize)
{
    if(NULL == Arr)
    {
        return false ;
    }

    int iCnt = 0 ;
    bool bFlag = false;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] ==  11 ) )
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
    
    
    

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

    bool bRet = false;
    bRet = Check11(iPtr,iSize);
    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }
    free(iPtr);
    
    return 0;
}

