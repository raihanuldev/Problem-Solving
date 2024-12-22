#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num) {
    int binary[32], index = 0;

    // Convert the number to binary and store it in an array
    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }

    // Check if the binary representation is a palindrome
    for (int i = 0; i < index / 2; i++) {
        if (binary[i] != binary[index - i - 1]) {
            return false;
        }
    }
    return true;
}

// Function to check if the number is wonderful
void isWonderful(int num) {
    if (num % 2 != 0 && isPalindrome(num)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    isWonderful(n);
    return 0;
}
