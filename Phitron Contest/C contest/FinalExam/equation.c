#include <stdio.h>

// Custom function to calculate X raised to the power of an exponent
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// Function to calculate the required sum
int calculateSum(int X, int N) {
    int sum = power(X, 0) - 1; // Initialize with X^0 - 1

    // Add terms for each even exponent from 2 up to N
    for (int i = 2; i <= N; i += 2) {
        sum += power(X, i);
    }
    return sum;
}

int main() {
    int X, N;
    scanf("%d %d", &X, &N);

    int result = calculateSum(X, N);
    printf("%d\n", result);

    return 0;
}
