//Author-Deomani Singh
//roll no-MT2024040
/*27. Write a program to execute ls -Rl by the following system calls
a. execl
b. execlp
c. execle
d. execv
e. execvp
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
//move 27.c to Process mgmt for better tree
int main(){
    //using a.execl
    //int a=execl("/bin/ls","ls","-Rl",NULL);
    // using b.execlp
    // int a=execlp("ls","ls","-Rl",NULL);
    //using c.execle
    // char *envp[]={NULL};
    //int a=execle("/bin/ls","ls","-Rl",NULL,envp);
    //usind d.execv
    // char *envp[]={"ls","-Rl",NULL};
    //int a=execv("/bin/ls",envp);
    char *envp[]={"ls","-Rl",NULL};
    int a=execvp("ls",envp);
    if(a==-1){
        printf("error command failed\n");
    }
}

