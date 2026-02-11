#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a == b) {
        printf("Both numbers are equal.\n");
    } else {
        printf("Numbers are not equal.\n");
    }

    return 0;
}
