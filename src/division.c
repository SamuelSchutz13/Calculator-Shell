#include <stdio.h>
#include <stdlib.h>

int main() {
    int number1, number2;

    printf("Enter the first number: ");
    if (scanf("%d", &number1) != 1) {
        printf("Invalid input for the first number.\n");
        return 1; 
    }

    printf("Enter the second number: ");
    if (scanf("%d", &number2) != 1) {
        printf("Invalid input for the second number.\n");
        return 1; 
    }

    if (number2 == 0) {
        printf("Division by zero is not allowed.\n");
        return 1; 
    }

    printf("The result is: %d\n", number1 / number2);
    return 0; 
}