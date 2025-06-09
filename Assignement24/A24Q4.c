///////////////////////////////////////////////////////////////////
// 
// Name:        A24Q4.c
// Description: Problems on String-> Check Vowel
// Author:      Pradhumnya Changdev Kalsait.
// Date:        09/06/25
//
///////////////////////////////////////////////////////////////////

// Input : marvellous
// Output : TRUE

// Input : Demo
// Output : TRUE

// Input : xyz
// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    if(NULL == str)
    {
        return false;
    }

    
    while(*str != '\0')
    {
        if((*str == 'A'||'a')||(*str == 'E'||'e')||(*str == 'I'||'i')||(*str == 'O'||'o')||(*str == 'U'||'u'))
        {
            break;
        }
        str++;
    }
    if( *str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the string:");
    scanf("%[^\n]s",Arr);

    bool bRet = false;
    bRet = CheckVowel(Arr);
    if(bRet == true)
    {
        printf("Vowels are present");
    } 
    else
    {
        printf("FALSE");
    }
    return 0;
}