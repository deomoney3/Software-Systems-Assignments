//author:Deomani Singh
//Roll no.-MT2024040
#include <unistd.h>
#include <stdio.h>

int main() {
    const char *old = "/home/dev/github/Software-Systems-Assignments/Assignment-1/a1/1b.out";
    const char *new = "/home/dev/github/Software-Systems-Assignments/Assignment-1/a1/hardlinksyscall";

    if (link(old, new) == -1) {
        perror("link");
        return 1;
    }

    return 0;
}
