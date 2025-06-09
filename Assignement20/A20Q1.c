///////////////////////////////////////////////////////////////////
// 
// Name:        A20Q1.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        06/06/25
//
///////////////////////////////////////////////////////////////////

// Input : N : 6
// NO: 66
// Elements : 85 66 3 66 93 88
// Output : TRUE
// Input : N : 6
// NO: 12
// Elements : 85 11 3 15 11 111
// Output : FALSE


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



bool Check(int* Arr , int iSize , int iNo)
{
    if(NULL == Arr)
    {
        return -1 ;
    }

    int iCnt = 0 , iCount = 0 ;
    bool bResult = false;
    
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] ==  iNo ) )
        {
            bResult = true;
        }
    }
    return bResult;

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
    printf("ENter the number you wanna Check:");
    scanf("%d",&iNo);

    bool bRet = false;
    bRet = Check(iPtr , iSize, iNo);
    if(bRet == true)
    {
        printf("The Number is present");
    }
    else
    {
        printf("The Number is not present");
    }
    
    free(iPtr);
    
    return 0;
}

