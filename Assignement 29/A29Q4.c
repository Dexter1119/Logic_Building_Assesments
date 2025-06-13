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

#define BUFFER_SIZE 1024

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
int CountCharFrequency(char str[],char ch)
{
    if(NULL == str)
    {
        return -1;
    }

    int fd = 0;
    int iCount = 0;
    int iRet = 0;
    int iCnt = 0;
    int Displ = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};


    fd = open(str , O_RDONLY);

    if(fd == -1)
    {
        return -1;
    }


    if(ch >= 'a' && ch <= 'z')
    {
        Displ = -32;
    }

    if(ch >= 'A' && ch <= 'Z')
    {
        Displ = 32;
    }


    while((iRet = read(fd , Buffer,BUFFER_SIZE)) != 0)
    {
        for(iCnt = 0;iCnt < iRet ; iCnt++)
        {
            if(Buffer[iCnt] == ch || Buffer[iCnt] == ch + Displ)
            {
                iCount++;
            }        
        }
        memsetX(Buffer,'\0',BUFFER_SIZE);
    }

    close(fd);
    return iCount;
}

int main()
{
    char Fname[30] = {'\0'};
    int iRet = 0;
    char cValue = '\0';


    printf("Enter the file that you wanna open:");
    scanf("%[^\n]s",Fname);

    printf("Enter the character :");
    scanf(" %c",&cValue);

    iRet = CountCharFrequency(Fname,cValue);
    if(iRet == -1)
    {
        printf("Unable to open the file");
        return -1;
    }
    printf("%c occured %d times",cValue,iRet);

    return 0 ;
}