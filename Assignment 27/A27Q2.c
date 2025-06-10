///////////////////////////////////////////////////////////////////
// 
// Name:        A27Q2.c
// Description: Problems on String 
// Author:      Pradhumnya Changdev Kalsait.
// Date:        10/06/25
//
///////////////////////////////////////////////////////////////////


// Input : “Marvellous Multi OS”
// 10
// Output : “Marvellous

#include<stdio.h>

void StrNCpyX(char *str1 , char *str2,int iSize)
{
    if( NULL == str1 || NULL == str2)
    {
        printf("Unable to find address space");
        return;
    }
    if(iSize == 0)
    {
        return;
    }

    while((*str1 != '\0') && (iSize != 0))
    {
        *str2 = *str1;
        str1++;
        str2++;
        iSize--;
        
    }
   

}
int main()
{
    char Arr1[50] = {'\0'};
    char Arr2[50] = {'\0'};
    int iValue = 0;
    

    printf("Enter the string\n");
    scanf("%[^\n]s",Arr1);

    printf("Enter the number of character you wanna add to the string:");
    scanf("%d",&iValue);

    
    
    StrNCpyX(Arr1,Arr2,iValue);
    printf("copy of String in another string is:%s",Arr2);
    


    return 0;
}