#include <stdio.h>

int main() {
    float a, b;
    char operator;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(operator) {
        case '+':
            printf("Result: %.2f\n", a + b);
            break;

        case '-':
            printf("Result: %.2f\n", a - b);
            break;

        case '*':
            printf("Result: %.2f\n", a * b);
            break;
        case '/':
        if(b !=0)
        printf("Result =%f2\n",a/b);
        else
        printf("Error = division by zero\n");
        break;

         default:
         printf("invalid operator!\n");
    }

    return 0;

}
