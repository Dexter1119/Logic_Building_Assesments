///////////////////////////////////////////////////////////////////
// 
// Name:        A25Q1.c
// Description: Problems on String  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        05/06/25
//
///////////////////////////////////////////////////////////////////

// Input : Marvellous Multi OS
// Output : marvellous multi os


#include<stdio.h>
void strlwrX(char *str)
{
    if(NULL == str )
    {
        printf("The Memory Location Not found");
    }
    while(*str != '\0')
    {
       if(*str >= 'A' && *str <= 'Z')
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

    strlwrX(Arr);

    printf("The Updated String is: %s\n",Arr);


    return 0;
}