///////////////////////////////////////////////////////////////////
// 
// Name:        A26Q1.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        10/06/25
//
///////////////////////////////////////////////////////////////////


// Input : “Marvellous Multi OS”
// e
// Output : TRUE

// Input : “Marvellous Multi OS”
// W
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>
bool ChkChar(char *str , char ch)
{
    if(NULL == str )
    {
        return false;
    }

    int Displ = 0;

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
           break;
       }
       str++;
    }
   return (*str != '\0');
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

    bool bRet = false;
    bRet = ChkChar(Arr,cValue);
    if(bRet == true)
    {
        printf("Character is present\n");
    }
    else
    {
        printf("Character is not present\n");
    }
    


    return 0;
}