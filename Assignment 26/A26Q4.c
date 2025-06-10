///////////////////////////////////////////////////////////////////
// 
// Name:        A26Q4.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        10/06/25
//
///////////////////////////////////////////////////////////////////


// Input : “Marvellous Multi OS”
// e
// Output : 4

#include<stdio.h>

int FirstOccurance(char *str , char ch)
{
    if(NULL == str )
    {
        return -1;
    }

    int Displ = 0;
    int iIndex = 0;
    char *start = NULL;

    if(ch >= 'a' && ch <= 'z')
    {
        Displ = -32;
    }
    if(ch >= 'A' && ch <= 'Z')
    {
        Displ = 32;
    }

    start = str;
    while(*str != '\0')
    {
       if(*str == ch || *str == ch + Displ)
       {
           iIndex = str - start;
           break;
       }
       str++;
    }
   return iIndex-1; // for index
}

int main()
{
    char Arr[50];
    char cValue =  '\0';

    printf("Enter the string\n");
    scanf("%[^\n]s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    //flush issue for buffer
    
    int iRet = 0 ;
    iRet = FirstOccurance(Arr,cValue);
    if(iRet == -1)
    {
        printf("The Memory Location Not found");
        return -1;
    }
    printf("First Occurance of %c is at index %d\n",cValue,iRet);
    


    return 0;
}