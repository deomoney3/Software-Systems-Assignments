//Author-Deomani Singh
//roll no-MT2024040
/*Write a separate program, to
open the file, implement write lock, read the ticket number, increment the number and print
the new ticket number then close the file. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/file.h>

int main() {
    int ticketNumber;
    int fileDescriptor = open("ticket_file.txt", O_RDWR);
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
    read(fileDescriptor, &ticketNumber, sizeof(ticketNumber));
    ticketNumber++;
    lseek(fileDescriptor, 0, SEEK_SET);
    write(fileDescriptor, &ticketNumber, sizeof(ticketNumber));
    flock(fileDescriptor, LOCK_UN);
    close(fileDescriptor);
    printf("New ticket number: %d\n", ticketNumber);
    return 0;
}
