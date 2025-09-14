#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    switch (units / 100) {
        case 0: // units <= 99
            bill = units * 5;
            break;

        case 1: // 100 to 199
            bill = (100 * 5) + (units - 100) * 7;
            break;

        default: // 200 and above
            bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
            break;
    }

    printf("Total electricity bill = Rs. %.2f\n", bill);
    return 0;
} 
