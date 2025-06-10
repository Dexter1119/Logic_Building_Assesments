///////////////////////////////////////////////////////////////////
// 
// Name:        A27Q5.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        10/06/25
//
///////////////////////////////////////////////////////////////////


// Input : “Marvellous Infosystems”
//         “Logic Building”
// Output : “Marvellous Infosystems Logic Building”

#include<stdio.h>

void StrCatX(char *str1 , char *str2)
{
    if( NULL == str1 || NULL == str2)
    {
        printf("Unable to find address space");
        return;
    }

    while(*str1 != '\0') 
    {     
        str1++;        
    }
    if(*str1 == '\0')
    {
        *str1 = 32;
    }
    while(*str2 != '\0') 
    {
        *str1 = *str2;
        str2++;
        str1++;        
    }
}
int main()
{
    char Arr1[50] = {'\0'};
    char Arr2[20] = {'\0'};

    printf("Enter the first string\n");
    scanf("%[^\n]s",Arr1);

    printf("Enter the second string\n");
    scanf(" %[^\n]s",Arr2);

    StrCatX(Arr1,Arr2);
    printf("Concatation of String in first string is:%s",Arr1);
    


    return 0;
}