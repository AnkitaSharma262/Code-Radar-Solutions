// Your code here...
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) {
        return 0; // Numbers less than 2 are not prime
    }

    int i = 2;
    while (i * i <= num) { // Loop until sqrt(num)
        if (num % i == 0) {
            return 0; // Not a prime number
        }
        i++; // Increment the divisor
    }

    return 1; // Prime number
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
