#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    if (sum % 2 == 0) {
        printf("The sum of %d and %d is %d, which is an EVEN number.\n", num1, num2, sum);
    } else {
        printf("The sum of %d and %d is %d, which is an ODD number.\n", num1, num2, sum);
    }

    return 0;
}