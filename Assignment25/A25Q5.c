///////////////////////////////////////////////////////////////////
// 
// Name:        A25Q5.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        10/06/25
//
///////////////////////////////////////////////////////////////////


// Input : “MarvellouS Infosystems”
// Output : 1

// Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
// Output : 5


#include<stdio.h>
int CountWhiteSpaces(char *str)
{
    if(NULL == str )
    {
        printf("The Memory Location Not found");
    }

    int iCount = 0;

    while(*str != '\0')
    {
       if(*str == ' ')
       {
           iCount++;
       }
       str++;
    }
    return iCount;
}

int main()
{
    char Arr[50];

    printf("Enter the string\n");
    scanf("%[^\n]s",Arr);

    int iRet = 0;
    iRet = CountWhiteSpaces(Arr);

    printf("Number Of White Spaces Are: %d\n",iRet);

    


    return 0;
}