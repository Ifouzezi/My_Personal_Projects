#include <stdio.h>

int main () {
    float num1, num2, result = 0.0;
    char op;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);  // add space before %c to consume whitespace

    printf("Enter the second number: ");
    scanf("%f", &num2);
    getchar();  // consume newline character left in the input buffer

    switch(op) {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;

        default:
            printf("Error: Invalid operation\n");
            return 1;
    }

    printf("%.2f %c %.2f = %.2f\n", num1, op, num2, result);

    return 0;
}
