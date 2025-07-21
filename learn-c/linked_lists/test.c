#include <stdio.h>
#include <stdlib.h>

int main() {
    int *i = NULL;
    printf("i: %d\n", i);
    i = malloc(sizeof(int));
    printf("i: %d\n", i);
    (*i) = 8;
    printf("i: %d\n", i);
    free(i);
    printf("i: %d\n", i);
    i = NULL;
    printf("i: %d\n", i);
    return 0;
}
