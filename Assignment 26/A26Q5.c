///////////////////////////////////////////////////////////////////
// 
// Name:        A26Q5.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        10/06/25
//
///////////////////////////////////////////////////////////////////


// Input : “Marvellous Multi OS”
// M
// Output : 11

// Input : “Marvellous Multi OS”
// W
// Output : -1

// Input : “Marvellous Multi OS”
// e
// Output : 4


#include<stdio.h>

int LastOccurance(char *str , char ch)
{
    if(NULL == str )
    {
        return -1;
    }

    int Displ = 0;
    int iIndex = 0;
    int iCount = 0;
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
       iCount++;
       str++;
    }
    str--;

    for( ; iCount > 0 ; iCount-- )
    {
        if(*str == ch || *str == ch + Displ)
        {
            iIndex = str - start;
            break;
        }
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
    iRet = LastOccurance(Arr,cValue);
    if(iRet == -1)
    {
        printf("The Memory Location Not found");
        return -1;
    }
    printf("Last Occurance of %c is at index %d\n",cValue,iRet);
    


    return 0;
}