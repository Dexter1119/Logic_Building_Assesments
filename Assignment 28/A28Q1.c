/////////////////////////////////////////////////////////////////////////////////
// 
// File Name:   A28Q1.c
// Description: FIle IO 
// Author:      Pradhumnya Changdev Kalsait
// Date:        13/06/2025
// 
/////////////////////////////////////////////////////////////////////////////////

/*
    Enter the file name: A28Q1.c

    File Opened Successfully...
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int ReadFile(char Fname[])
{
    int fd = 0;

    fd = open(Fname , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file ");
        return -1;
    }
   
    close(fd);
    return fd;

}
int main()
{
    char Fname[30] = {'\0'};
    int iRet = 0;

    printf("Enter the file name: ");
    scanf("%[^\n]s", Fname);

    iRet = ReadFile(Fname);
    if(iRet == -1)
    {
        printf("Unable to open file ");
        return -1;
    }   
    printf("File Opened Successfully with fd : %d...",iRet);

    return 0;
}