///////////////////////////////////////////////////////////////
// 
// Name:        A1Q4.c
// Description: Program to show given no. is divioble 5 0r Not
// Author:      Pradhumnya Changdev Kalsait
// Assignment:  Assignement 1 Question 4
// Date:        09-05-25
// 
////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE -1
int Check(int iNo)
{
    if(iNo %5 == 0){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{

    int iValue = 0;
    printf("ENter the number:");
    scanf("%d",&iValue);

    int iRet = 0;
    if(iRet ==  TRUE)
    {
        printf("%d is Divisioble by 5",iValue);
    }
    else{
        printf("%d is not Divisioble by 5",iValue);
    }
    
    return 0;
}


































// Approch 1-->
    // #include<stdbool.h> //1995

    // bool Check(int iNo)
    // {
    //     if(iNo %5 == 0){
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
    // }
    // int main()
    // {
    //     int iValue = 0;
    //     printf("ENter the number:");
    //     scanf("%d",&iValue);
    //     bool bRet = Check(iValue);
    //     if(bRet == true){
    //         printf("%d is divisible by 5\n",iValue);
    //     }
    //     else{
    //         printf("%d is not divisible by 5\n",iValue);
    //     }

    // }