#include <stdio.h>

int main() {
    int number, last_digit;
    printf("Enter an integer: ");
    scanf("%d", &number);

    last_digit = number % 10;

    printf("The last digit is: %d\n", last_digit);
    return 0;
}






