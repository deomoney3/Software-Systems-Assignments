//Author-Deomani Singh
//roll no-MT2024040
/*4.Write a program to open an existing file with read write mode. Try O_EXCL flag also */

#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
extern int errno;
int main(){
    int fd=open("foo2.txt",O_EXCL|O_RDWR);
    printf("fd =  %d\n",fd);
    if(fd==-1){
        printf("error number %d\n",errno);
        perror("program");
    }
    return 0;
}
