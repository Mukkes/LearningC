#include <stdio.h>

int main() {
    FILE *filePointer;
    filePointer = fopen("input.txt", "r");
    int i;
    if (filePointer != NULL) {
        while ((i = fgetc(filePointer)) != EOF) {
            printf("%c\n", i);
        }
    }
    fclose(filePointer);

    printf("Part1: %d\n", 0);
    printf("Part2: %d\n", 0);
    return 0;
}
