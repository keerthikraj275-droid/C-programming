#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    int lastDigit = number % 10;
    if (lastDigit % 3 == 0) {
        printf("The last digit (%d) of the given number is divisible by 3.\n", lastDigit);
    } else {
        printf("The last digit (%d) of the given number is not divisible by 3.\n", lastDigit);
    }

    return 0;
}