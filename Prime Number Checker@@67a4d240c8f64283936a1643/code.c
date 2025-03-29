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
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }

    return 0;
}
