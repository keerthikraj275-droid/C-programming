#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1, num2 ;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);
    int lastDigit1 = abs(num1 % 10);
    int lastDigit2 = abs(num2 % 10);
    if (lastDigit1 == lastDigit2) {
        printf("The numbers %d and %d have the same last digit.\n", num1, num2);
    } else {
        printf("The numbers %d and %d do NOT have the same last digit.\n", num1, num2);
    }

    return 0;
}