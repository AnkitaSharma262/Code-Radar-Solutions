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
    int num, b;
    // Input from user
    scanf("%d", &num);
    // Performing one's complement
    b = ~num;
    // Display results
    // printf(" %d\n", num);
    printf(" %d\n", b);
    return 0;
}