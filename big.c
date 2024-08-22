#include <stdio.h>

int main() {
    int num, maxDigit = 0, digit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Process each digit
    while (num > 0) {
        digit = num % 10;  // Extract the last digit
        if (digit > maxDigit) {
            maxDigit = digit;  // Update maxDigit if the current digit is larger
        }
        num /= 10;  // Remove the last digit from the number
    }

    // Output the largest digit
    printf("The largest digit is: %d\n", maxDigit);

    return 0;
}

