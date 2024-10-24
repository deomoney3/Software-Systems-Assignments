//Author-Deomani Singh
//roll no-MT2024040
/*6. Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls */

#include<stdio.h>
#include<unistd.h>

int main() {
    char buffer[1024];

    int n= read(STDIN_FILENO, buffer,1024); 

        write(STDOUT_FILENO, buffer,n);


    return 0;

}
