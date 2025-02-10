#include <stdio.h>

// int main() {
//     int a;
//     int b=~a;
//     scanf("%d",&a);
//     // scanf("%d",&b);
//     printf("%d",a~a);
//     return 0;
// }
int main() {
    int a, b;
    // Input from user
    scanf("%d", &a);
    // Performing one's complement
    b = ~a;
    // Display results
    // printf(" %d\n", num);
    printf(" %d", b);
    return 0;
}