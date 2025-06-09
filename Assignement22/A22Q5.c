///////////////////////////////////////////////////////////////////
// 
// Name:        A22Q5.c
// Description: Problems on Numbers  
// Author:      Pradhumnya Changdev Kalsait.
// Date:        06/06/25
//
///////////////////////////////////////////////////////////////////

// Input : C
// Output : Your exam at 9.20 AM
// Input : d
// Output : Your exam at 10.30 AM

#include<stdio.h>

void DisplaySchedule(char ch)
{

    if(((ch >= 'a') && (ch <= 'd') )|| ((ch >= 'A') && (ch <= 'D')))
    {
        if(ch == 'a'|| ch == 'A')
        {
            printf("Your Exam  at 7 AM");
        }
        else if(ch == 'b' || ch == 'B')
        {
            printf("Your Exam  at 8.30 AM");
        }
        else if(ch == 'c' || ch == 'C')
        {
            printf("Your Exam  at 9.20 AM");
        }
        else if(ch == 'd' || ch == 'D')
        {
            printf("Your Exam  at 10.30 AM");
        }
    }
    else
    {
        printf("!!...Enter Correct Division...!!");
        return;
    }
  
}
int main()
{
    char cValue = '\0';
    printf("ENter the Your Divison :");
    scanf(" %c",&cValue);

    DisplaySchedule(cValue);
   
    
    return 0;
}