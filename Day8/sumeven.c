#include <stdio.h>

int sumEven() {
    int sum = 0;
    for(int i = 1; i <= 10; i++) {
        sum += i * 2;
    }
    return sum;
}

int main() {
    printf("Sum = %d", sumEven());
    return 0;
}
