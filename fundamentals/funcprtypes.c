#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age);


int main() {

    hello("Raphael", 20);

    return 0;
}

void hello(char name[], int age) {
    printf("Hello %s\n", name);
    printf("You are %d years old", age);
}