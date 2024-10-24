//Author -Deomani Singh
//Roll no-2024040
/*11. Write a program to open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not.
b.use dup2
 */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

int main()
{
    int file_desc = open("test.txt",O_WRONLY | O_APPEND);
    dup2(file_desc, 1) ;
    printf("I will be printed in the file test.txt\n");
    return 0;
}
