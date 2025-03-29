// Your code here...
#include <stdio.h>


int isPrime(int num) {
    if (num < 2) {
        return 0; 
    }

    int i = 2;
    while (i * i <= num) { 
        if (num % i == 0) {
            return 0; 
        }
        i++; 
    }

    return 1; 
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
