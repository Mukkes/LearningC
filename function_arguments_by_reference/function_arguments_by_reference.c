#include <stdio.h>

typedef struct {
    char *name;
    int age;
} Person;

void birthday(Person *p);

int main() {
    Person john;
    john.name = "John";
    john.age = 27;

    printf("%s is %d years old.\n", john.name, john.age);
    birthday(&john);
    printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

    return 0;
}

void birthday(Person *p) {
    p->age++;
}
