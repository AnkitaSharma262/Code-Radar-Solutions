// Your code here...
#include <stdio.h>
int isprime(int sum){
    if(num<2)
    return 0;
}
int t=2;
while(t*t<=num){
    if (num %1 ==0){
        return 0;
    }
    t++;
    return 1;
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