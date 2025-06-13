/////////////////////////////////////////////////////////////////////////////////
// 
// File Name:   A28Q3.c
// Description: FIle IO 
// Author:      Pradhumnya Changdev Kalsait
// Date:        13/06/2025
// 
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 10

void ReadFile(char Fname[])
{
    int fd = 0;
    int iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname , O_RDONLY);
    if(fd == -1)
    {
        return -1;
    }

    iRet = read(fd, Buffer , BUFFER_SIZE);
    if(iRet == -1)
    {
        
        return -1;
    }
    write(1,Buffer,iRet);

    while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0 )
    {
        write(1,Buffer,iRet);
        memset(Buffer , '\0',BUFFER_SIZE);
    }

    close(fd);
}
int main()
{
    char Fname[30] = {'\0'};

    printf("ENter the name of file that you want to read:");
    scanf("%[^\n]s",Fname);

    ReadFile(Fname);


    close(fd);
    return 0;
}