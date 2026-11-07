#include <stdio.h>

int main(void)
{
    int a, b;
    char operator;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2)
        return 1;

    printf("Enter an operator (+,-,*,/): ");
    if (scanf(" %c", &operator) != 1)
        return 1;

    switch (operator)
    {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b == 0)
                printf("Cannot divide by zero.\n");
            else
                printf("%d\n", a / b);
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}