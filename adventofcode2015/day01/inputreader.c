#include <stdio.h>

void ReadInput(char *input, int lenght) {
    FILE *filePointer;
    filePointer = fopen("input.txt", "r");
    if (filePointer != NULL) {
        fgets(input, lenght, filePointer);
    }
    fclose(filePointer);
}
