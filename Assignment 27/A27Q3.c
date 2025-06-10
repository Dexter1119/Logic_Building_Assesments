///////////////////////////////////////////////////////////////////
// 
// Name:        A27Q3.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        10/06/25
//
///////////////////////////////////////////////////////////////////


// Input : “Marvellous Multi OS”
// Output : “MMOS”

#include<stdio.h>

void StrCpyCap(char *str1 , char *str2)
{
    if( NULL == str1 || NULL == str2)
    {
        printf("Unable to find address space");
        return;
    }
    
    while(*str1 != '\0') 
    {
        if(*str1 >= 'A' && *str1 <= 'Z')
        {
            *str2 = *str1;
            str2++;
        }      
        str1++;        
    }
}
int main()
{
    char Arr1[50] = {'\0'};
    char Arr2[50] = {'\0'};

    printf("Enter the string\n");
    scanf("%[^\n]s",Arr1);

    StrCpyCap(Arr1,Arr2);
    printf("copy of String in another string is:%s",Arr2);
    


    return 0;
}