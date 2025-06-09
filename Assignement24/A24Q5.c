///////////////////////////////////////////////////////////////////
// 
// Name:        A24Q4.c
// Description: Problems on String-> Check Vowel
// Author:      Pradhumnya Changdev Kalsait.
// Date:        09/06/25
//
///////////////////////////////////////////////////////////////////

// Input :  MarvellouS
// Output : SuollevraM

#include<stdio.h>

void DisplayRev(char *str)
{
    if(NULL == str)
    {
        return ;
    }

    int iCount = 0;
    int iCnt = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    str--;

    for(iCnt = 0; iCnt < iCount ; iCnt++)
    {
        printf("%c\t",*str);
        str--;
    }
    
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the string:");
    scanf("%[^\n]s",Arr);

    DisplayRev(Arr);
    return 0;
}