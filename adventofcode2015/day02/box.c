#include "box.h"
#include <stdlib.h>
#include <string.h>

Box CreateBox(char *line) {
    Box box;
    char *numberPointer = strtok(line, "x");
    box.x = atoi(numberPointer);
    numberPointer = strtok(NULL, "x");
    box.y = atoi(numberPointer);
    numberPointer = strtok(NULL, "x");
    box.z = atoi(numberPointer);
    return box;
}
