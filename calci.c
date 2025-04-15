#include <stdio.h>
#include <math.h> // for pow()

// Function to perform calculations
double calculate(double a, double b, char operator) {
    switch (operator) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : 0;
        case '^': return pow(a, b); // exponent operator
        default: 
            printf("Invalid operator\n");
            return 0;
    }
}

int main() {
    double num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /, ^): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    double result = calculate(num1, num2, op);
    printf("Result: %.2lf\n", result);

    return 0;
}
