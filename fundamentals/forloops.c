#include <stdio.h>
// Header file that provides sleep function
#include <unistd.h>

int main() {
    for (int i = 0; i <= 10; i++) {
        sleep(1); // every 1 sec
        printf("%d\n", i++);
    }
    return 0;
}