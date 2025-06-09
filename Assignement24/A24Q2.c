///////////////////////////////////////////////////////////////////
// 
// Name:        A24Q2.c
// Description: Problems on String-> count small 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        09/06/25
//
///////////////////////////////////////////////////////////////////

// Enter the string: Marvellous 
// THe Number of small letters in string are:9


#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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
    iRet = CountSmall(Arr);

    printf("THe Number of small letters in string are:%d",iRet);

    return 0;
}