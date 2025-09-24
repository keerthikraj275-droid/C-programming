#include <stdio.h>

int main() {
    int num1, num2, difference;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    difference = num1 - num2;
    if (difference % 2 == 0) {
        printf("The difference (%d) is an even number.\n", difference);
    } else {
        printf("The difference (%d) is an odd number.\n", difference);
    }

    return 0;
}