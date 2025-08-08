#include "inputreader.h"
#include <stdio.h>

const int lenght = 10000;

int main() {
    char input[lenght];
    ReadInput(input, lenght);
    int floor = 0;
    int position = 0;
    for (int i = 0; i < lenght; i++) {
        if (input[i] == '(') {
            floor++;
        } else if (input[i] == ')') {
            floor--;
        } else {
            break;
        }
        if (position == 0 && floor < 0) {
            position = i + 1;
        }
    }
    printf("Day 01 part 1: %i\n", floor);
    printf("Day 01 part 2: %i\n", position);
    return 0;
}
