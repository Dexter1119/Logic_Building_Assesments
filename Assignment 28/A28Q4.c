/////////////////////////////////////////////////////////////////////////////////
// 
// File Name:   A28Q4.c
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

int FileSize(char Fname[])
{
    int fd = 0;
    int iRet = 0;
    int iCount = 0;
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

    iCount = iRet;
    while((iRet = read(fd , Buffer , BUFFER_SIZE)) != 0)
    {
        iCount += iRet;
        memset(Buffer , '\0' , BUFFER_SIZE);
    }

    close(fd);
    return iCount;

}
int main()
{
    char Fname[30] = {'\0'};
    int iRet = 0;
    

    printf("ENter the name of file that you want to read:");
    scanf("%[^\n]s",Fname);

    iRet = FileSize(Fname);
    if(iRet == -1)
    {
        printf("Unable to read the file");
        return -1;
    }
    printf("Size of file is :%d bytes",iRet);

    

    

    close(fd);
    return 0;
}