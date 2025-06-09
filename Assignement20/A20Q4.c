///////////////////////////////////////////////////////////////////
// 
// Name:        A20Q4.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        06/06/25
//
///////////////////////////////////////////////////////////////////

// Input : N : 6
// Start: 60
// End : 90
// Elements : 85 66 3 76 93 88
// Output : 66 76 88


// Input : N : 6
// Start: 30
// End : 50
// Elements : 85 66 3 76 93 88
// Output :


#include<stdio.h>
#include<stdlib.h>




void Range(int *Arr, int iSize, int iStart, int iEnd)
{
    if(NULL == Arr)
    {
        return;
    }

    int iCnt = 0 ;
    
    
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] >=  iStart ) && (Arr[iCnt] <= iEnd ) )
        {
            printf("%d\t",Arr[iCnt]);
        }
    }

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

    int iNo1 = 0;
    printf("ENter the Start you wanna Check:");
    scanf("%d",&iNo1);

    int iNo2 = 0;
    printf("ENter the End you wanna Check:");
    scanf("%d",&iNo2);

    Range(iPtr , iSize, iNo1, iNo2);
    
    free(iPtr);
    
    return 0;
}

