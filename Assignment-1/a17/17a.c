//Author-Deomani Singh
//roll no-MT2024040
/*17. Write a program to simulate online ticket reservation. Implement write lock
Write a program to open a file, store a ticket number and exit. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/file.h>

int main() {
    int ticketNumber = 1;
    int fileDescriptor = open("ticket_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fileDescriptor == -1) {
        perror("Failed to open the file");
        return 1;
    }else{
        printf("file open succesfully\n");
    }
    if (flock(fileDescriptor, LOCK_EX) == -1) {
        perror("Failed to lock the file");
        return 1;
    }else{
        printf("lock applied successfully\n");
    }
    write(fileDescriptor, &ticketNumber, sizeof(ticketNumber));
    flock(fileDescriptor, LOCK_UN);
    close(fileDescriptor);

    printf("Ticket reservation successful.\n");

    return 0;
}
