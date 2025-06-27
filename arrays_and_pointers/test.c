#include <stdio.h>
#include <stdlib.h>

int main() {
    int myarray[10000000];
    myarray[999999] = 10;
    printf("arr[]: %d\n", myarray[999999]);

    return 0;
}
