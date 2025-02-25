#include <stdio.h>

int main()
{
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\nResult: %.2lf\n ", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\nResult: %.2lf\n ", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nResult: %.2lf\n ", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nResult: %.2lf\n ", result);
        break;
    default:
        printf("\nInvalid operator.\n ");
        break;
    }

    return 0;
}