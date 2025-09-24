#include <stdio.h>

int main() {
    int number;
    int firstDigit;
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);
    if (number < 100 || number > 999) {
        printf("Invalid input. Please enter a 3-digit number.\n");
        return 1; 
    }
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    if (firstDigit % 2 == 0) {
        printf("The first digit (%d) is even.\n", firstDigit);
    } else {
        printf("The first digit (%d) is odd.\n", firstDigit);
    }

    return 0; 
}