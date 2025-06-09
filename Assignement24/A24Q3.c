///////////////////////////////////////////////////////////////////
// 
// Name:        A24Q3.c
// Description: Problems on String-> Diff small cap
// Author:      Pradhumnya Changdev Kalsait.
// Date:        09/06/25
//
///////////////////////////////////////////////////////////////////

// Input : MarvellouS
// Output : 6 (8-2)


#include<stdio.h>

int DiffCapSmall(char *str)
{
    int iCount = 0;
    int iCountCap = 0;
    int iCountSmall = 0;
    
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCap++;
        }
        str++;
    }
    return (iCountSmall - iCountCap);
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the string:");
    scanf("%[^\n]s",Arr);

    int iRet = 0;
    iRet = DiffCapSmall(Arr);

    printf("THe diff between number of small letters and Capital letters in string are:%d",iRet);

    return 0;
}