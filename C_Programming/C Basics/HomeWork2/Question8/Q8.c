/*
 * Q8.c
 *
 *  Created on: Aug 22, 2025
 *      Author: LOQ
 */
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    fflush(stdout);
    scanf("%c", &operator);
    fflush(stdin);
    printf("Enter two operands: ");
    fflush(stdout);
    scanf("%lf %lf", &num1, &num2);
    fflush(stdin);
        switch(operator) {
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
            if(num2 != 0.0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                fflush(stdout);
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
            return 1;
    }
    printf("    %.2f %c %.2f = %.2f\n", num1, operator, num2, result);
    fflush(stdout);
    return 0;
}

