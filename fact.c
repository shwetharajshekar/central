#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the input is valid
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate the factorial
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

       

