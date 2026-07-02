#include <stdio.h>

int main() {
    int num = 0;

    // while (num <= 0) {
    //     printf("Enter a number greater than 0: ");
    //     scanf("%d", &num);
    // }

    do {
        printf("Enter a number greater than 0: ");
        scanf("%d", &num);
    } while(num <= 0);

    return 0;
}