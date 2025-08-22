#include "box.h"
#include <stdio.h>

Box ConvertStringToBox(char *line);
int GetSurfaceArea(Box box);
int GetRequiredWarppingPaper(Box box);

int main() {
    FILE *filePointer;
    filePointer = fopen("input.txt", "r");
    char line[12];
    if (filePointer != NULL) {
        while (fgets(line, sizeof(line), filePointer)) {
        }
    }
    return 0;
}

int GetSurfaceArea(Box box) {
    return (2 * box.l * box.w) + (2 * box.w * box.h) + (2 * box.h * box.l);
}

int GetRequiredWarppingPaper(Box box) {
