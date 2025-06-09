///////////////////////////////////////////////////////////////////
// 
// Name:        A18Q3.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////

// Input : N : 6
// Elements : 85 66 3 80 93 88
// Output : 80

#include<stdio.h>
#include<stdlib.h>

void Display(int* Arr , int iSize)
{
    if(NULL == Arr)
    {
        return ;
    }

    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 2 == 0))
        {
            printf("%d\t",Arr[iCnt]);
        }
        else
        {
            continue;
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

    printf("elements which are even and divisible by 5 are :    ");
    Display(iPtr , iSize);
    
    free(iPtr);
    
    return 0;
}

