///////////////////////////////////////////////////////////////////
// 
// Name:        A25Q4.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////

// Input : marve89llous121
// Output : 89121

// Input : Demo
// Output :


#include<stdio.h>
void DisplayDigit(char *str)
{
    if(NULL == str )
    {
        printf("The Memory Location Not found");
    }

    while(*str != '\0')
    {
       if(*str >= '0' && *str <= '9')
       {
           printf("%c",*str);
       }
       str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter the string\n");
    scanf("%[^\n]s",Arr);

    DisplayDigit(Arr);

    


    return 0;
}