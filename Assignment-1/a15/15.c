//Author-Deomani Singh
//roll no-MT2024040
/*15. Write a program to display the environmental variable of the user (use environ). */

#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main() {

   for (int i = 0; environ[i] != NULL; i++) {
        printf("%s\n", environ[i]);
    }

    return 0;
}
