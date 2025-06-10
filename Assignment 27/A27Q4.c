///////////////////////////////////////////////////////////////////
// 
// Name:        A27Q4.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        10/06/25
//
///////////////////////////////////////////////////////////////////


// Input : “Marvellous multi OS”
// Output : “arvellous multi”

#include<stdio.h>

void StrCpySmall(char *str1 , char *str2)
{
    if( NULL == str1 || NULL == str2)
    {
        printf("Unable to find address space");
        return;
    }
    
    while(*str1 != '\0') 
    {
        if(*str1 >= 'a' && *str1 <= 'z')
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

    StrCpySmall(Arr1,Arr2);
    printf("copy of String in another string is:%s",Arr2);
    


    return 0;
}