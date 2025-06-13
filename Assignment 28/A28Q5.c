/////////////////////////////////////////////////////////////////////////////////
// 
// File Name:   A28Q5.c
// Description: FIle IO 
// Author:      Pradhumnya Changdev Kalsait
// Date:        13/06/2025
// 
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>


#define BUFFER_SIZE 10

int WriteFile(char Fname[])
{
    if(NULL == Fname)
    {
        return -1;
    }
    int fd = 0;
    int iRet = 0;
    int iCount = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open( Fname, O_RDWR | O_APPEND);
    if(fd == -1)
    {
        return -1;
    }

    printf("ENter the data that you want to write :");
    while((iRet= read(0 , Buffer , BUFFER_SIZE)) != 0)
    {
        write(fd , Buffer , iRet);
        memset(Buffer , '\0' , BUFFER_SIZE);
        iCount += iRet;
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

    iRet = WriteFile(Fname);
    if(iRet == -1)
    {
        printf("Unable to read the file");
        return -1;
    }
    printf("%d bytes written in to the file",iRet);

    return 0;
}