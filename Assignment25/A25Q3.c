///////////////////////////////////////////////////////////////////
// 
// Name:        A25Q3.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////

// Input : Marvellous Multi OS
// Output : mARVELLOUS mULTI os

#include<stdio.h>
void strtogglex(char *str)
{
    if(NULL == str )
    {
        printf("The Memory Location Not found");
    }

    while(*str != '\0')
    {
       if(*str >= 'a' && *str <= 'z')
       {
          *str = *str - 32;
       }
       else if(*str >= 'A' && *str <= 'Z')
       {
          *str = *str + 32;
       }

       str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter the string\n");
    scanf("%[^\n]s",Arr);

    strtogglex(Arr);

    printf("The Updated String is: %s\n",Arr);

    return 0;
}