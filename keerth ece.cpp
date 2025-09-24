#include <stdio.h>

int main() {
    int number;
    int lastDigit;
    printf("Enter an integer: ");
    scanf("%d", &number);
    lastDigit = number % 10;
    if (lastDigit < 0) {
        lastDigit = -lastDigit;
    }
    if (lastDigit % 2 == 0) {
        printf("The last digit (%d) is even.\n", lastDigit);
    } else {
        printf("The last digit (%d) is odd.\n", lastDigit);
    }

    return 0;
}