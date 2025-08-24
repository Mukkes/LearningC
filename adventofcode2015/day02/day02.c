#include "box.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *filePointer;
    filePointer = fopen("input.txt", "r");
    char line[12];
    int index = 0;
    Box boxes[1000];
    if (filePointer != NULL) {
        char *numberPointer;
        while (fgets(line, sizeof(line), filePointer)) {
            numberPointer = strtok(line, "x");
            boxes[index].l = atoi(numberPointer);
            numberPointer = strtok(NULL, "x");
            boxes[index].w = atoi(numberPointer);
            numberPointer = strtok(NULL, "x");
            boxes[index].h = atoi(numberPointer);
            index++;
        }
    }
    fclose(filePointer);

    int resultPart1 = 0;
    for (int i = 0; i < 1000; i++) {
        resultPart1 += GetRequiredWarppingPaper(&boxes[i]);
    }
    printf("Part1: %d\n", resultPart1);
    int resultPart2 = 0;
    for (int i = 0; i < 1000; i++) {
        resultPart2 += GetRibbon(&boxes[i]);
    }
    printf("Part2: %d\n", resultPart2);
    return 0;
}
