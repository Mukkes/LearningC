#include <stdio.h>

int factorial(int x);

int main() {
    printf("0! = %i\n", factorial(0));
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));
    return 0;
}

int factorial(int x) {
    if (x == 0) {
        return 1;
    }
    return x * factorial(x - 1);
}
