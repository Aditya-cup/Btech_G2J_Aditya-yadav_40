#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Convert uppercase to lowercase if needed
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("It is a vowel.\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("It is a consonant.\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
