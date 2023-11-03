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

    long long result = (long long)number1 * number2; 

    printf("The result is: %lld\n", result);
    return 0; 
}