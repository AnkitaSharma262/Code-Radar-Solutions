// Your code here...
#include <stdio.h>
void isprime();
int main() {
    int t;
    scanf("%d", &t);
    while (int t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
void isprime(){
    if(int t%2==0){
        printf("1");

    }
    else 
    printf("0");
}
