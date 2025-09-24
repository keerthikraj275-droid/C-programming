#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number < 0) {
        number = -number; 
    }
    if (number >= 0 && number <= 9) {
        printf("The number is a single-digit number.\n");
    } else if (number >= 10 && number <= 99) {
        printf("The number is a two-digit number.\n");
    } else if (number >= 100 && number <= 999) {
        printf("The number is a three-digit number.\n");
    } else {
        printf("The number is either zero or has more than three digits.\n");
    }

    return 0;
}