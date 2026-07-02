#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    // Different random number based on time
    printf("%d", rand());

    return 0;
}