///////////////////////////////////////////////////////////////////
// 
// Name:        A21Q4.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        06/06/25
//
///////////////////////////////////////////////////////////////////

// Input : N : 6
// Elements : 8225 665 3 76 953 858

// Output : 665 953 858

#include<stdio.h>
#include<stdlib.h>




void Digit(int *Arr, int iSize)
{
    if(NULL == Arr)
    {
        return ;
    }

    int iCnt = 0 ;
    int iCount = 0;
    int iArr = 0; //to preserve arr value
    
   
    for(iCnt = 0 ; iCnt < iSize ; iCnt++,iCount = 0 )
    {
        iArr = Arr[iCnt];   
        while(iArr > 0)
        {
            iCount++;
            iArr = iArr / 10;
            
        }
        
        if(iCount == 3)
        {
            printf("%d ",Arr[iCnt]);
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

    
   
    Digit(iPtr , iSize);
    
    
    
    free(iPtr);
    
    return 0;
}

