#include <stdio.h>

int main() {
    int intarray[5] = {10, 20, 30, 40, 50};

    int i;
    for (i = 0; i < 5; i++) {
        printf("intarray[%d] has value %d - and address @ %x\n", i, intarray[i],
               &intarray[i]);
    }

    int *intpointer = &intarray[3];
    printf("address: %x - has value %d\n", intpointer, *intpointer);

    intpointer++;
    printf("address: %x - has value %d\n", intpointer, *intpointer);

    return 0;
}
