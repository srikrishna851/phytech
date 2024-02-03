#include <stdio.h>

// Function to find the GCD of two numbers using Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }    return a;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Find and print the GCD
    int gcd = findGCD(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}

