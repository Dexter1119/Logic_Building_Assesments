/////////////////////////////////////////////////////////////////////////////////
// 
// File Name:   A28Q2.c
// Description: FIle IO 
// Author:      Pradhumnya Changdev Kalsait
// Date:        13/06/2025
// 
/////////////////////////////////////////////////////////////////////////////////


/*
Enter the file name that you want to create:Hello.txt

File is created successfully with file descriptor : 3
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int CreateFile(char Fname[])
{
    int fd = 0;
    fd = creat(Fname, 0777);
    if(fd == -1)
    {
        return -1;
    }

    close(fd);
    return fd;

}

int main()
{
    char Fname[30] = {'\0'};
    int iRet = 0;

    printf("Enter the file name that you want to create:");
    scanf("%[^\n]s",Fname);

    iRet = CreateFile(Fname);
    if(iRet == -1)
    {
        printf("Unable to create the file");
        return -1;
    }
    printf("File is created successfully with file descriptor : %d",iRet);

    
    return 0;
}