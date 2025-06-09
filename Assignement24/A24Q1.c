///////////////////////////////////////////////////////////////////
// 
// Name:        A24Q1.c
// Description: Problems on String-> count Capital 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        09/06/25
//
///////////////////////////////////////////////////////////////////

// Enter the string: Marvellous Multi OS
// THe Number of capital letters in string are:4


#include<stdio.h>

int CountCap(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the string:");
    scanf("%[^\n]s",Arr);

    int iRet = 0;
    iRet = CountCap(Arr);

    printf("THe Number of capital letters in string are:%d",iRet);

    return 0;
}