///////////////////////////////////////////////////////////////////
// 
// Name:        A26Q2.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        10/06/25
//
///////////////////////////////////////////////////////////////////


// Input : “Marvellous Multi OS”
// M
// Output : 2

// Input : “Marvellous Multi OS”
// W
// Output : 0

#include<stdio.h>

int CountFrequency(char *str , char ch)
{
    if(NULL == str )
    {
        return -1;
    }

    int Displ = 0;
    int iCount = 0;

    if(ch >= 'a' && ch <= 'z')
    {
        Displ = -32;
    }
    if(ch >= 'A' && ch <= 'Z')
    {
        Displ = 32;
    }

    while(*str != '\0')
    {
       if(*str == ch || *str == ch + Displ)
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
    char cValue =  '\0';

    printf("Enter the string\n");
    scanf("%[^\n]s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    //flush issue for buffer
    
    int iRet = 0 ;
    iRet = CountFrequency(Arr,cValue);
    if(iRet == -1)
    {
        printf("The Memory Location Not found");
        return -1;
    }
    printf("The frequency of %c is %d\n",cValue,iRet);
    


    return 0;
}