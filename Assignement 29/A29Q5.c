/////////////////////////////////////////////////////////////////////////////////
// 
// File Name:   A29Q4.c
// Description: FIle IO 
// Author:      Pradhumnya Changdev Kalsait
// Date:        13/06/2025
// 
/////////////////////////////////////////////////////////////////////////////////

/*
Enter the file that you wanna open:Demo.txt
Enter the character :a

a occured 2 times
*/

#define BUFFER_SIZE 10

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void memsetX(char *str , char ch ,int iSize)
{
    if(NULL == str)
    {
        return;
    }

    while(iSize > 0)
    {
        *str = ch;
        str++;
        iSize--;
    }
}
void DisplayChars(char str[],int iSize)
{
    if(NULL == str)
    {
        return ;
    }

    int fd = 0;
    int iCount = 0;
    int iRet = 0;
    int iCnt = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};


    fd = open(str , O_RDONLY);

    if(fd == -1)
    {
        return ;
    }


    while((iRet = read(fd , Buffer,BUFFER_SIZE)) != 0)
    {
        write(1,Buffer,iRet);
        iSize = iSize - iRet;
        if(iSize <= 0)
        {
            break;
        }
        memsetX(Buffer,'\0',BUFFER_SIZE);
    }

    close(fd);
   
}

int main()
{
    char Fname[30] = {'\0'};
    int iRet = 0;
    int iValue = 0;


    printf("Enter the file that you wanna open:");
    scanf("%[^\n]s",Fname);

    printf("Enter the No of Characters that you want :");
    scanf(" %d",&iValue);

    DisplayChars(Fname,iValue);


    
    return 0 ;
}