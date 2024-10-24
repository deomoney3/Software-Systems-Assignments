//Author-Deomani Singh
//roll no-MT2024040
/*21. Write a program, call fork and print the parent and child process id. */

#include <stdio.h>
#include <sys/resource.h>
#include <unistd.h>
int main(){
    pid_t parent= getppid();
    pid_t process= getpid();
    pid_t pid=fork();
    printf("child process: %d\n",process);
    printf("parent process: %d\n",parent);
}
