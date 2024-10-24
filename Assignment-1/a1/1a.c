//Author:Deomani Singh
//Roll Number: MT2024040
/*Create the following types of a files using (i) shell command (ii) system call
a. soft link (symlink system call)
b. hard link (link system call)
c. FIFO (mkfifo Library Function or mknod system call)
*/
//answer for a:using system call

#include <unistd.h>
#include <stdio.h>
int main(){
const char *original_file = "1a.out";
const char *Path_for_hardlink ="/home/dev/github/Software-Systems-Assignments/Assignment-1/a1/softpointer";

if(symlink(original_file, Path_for_hardlink) == -1){
	perror("symlink");
	return 1;
}

	return 0;
}

