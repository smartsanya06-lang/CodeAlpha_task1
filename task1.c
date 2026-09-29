#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Addition = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Subtraction = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Multiplication = %.2f\n", result);
            break;

        case '/':
            if (num2 != 0)
                printf("Division = %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operation!\n");
    }

    return 0;
}