#include <stdio.h>

int main() {
    int a;

    printf("Enter a number");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("%d is an Even number.\n", a);
    } else {
        printf("%d is an Odd number.\n", a);
    }

    return 0;
}
