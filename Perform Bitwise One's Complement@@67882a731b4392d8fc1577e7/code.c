// #include <stdio.h>

// int main() {
//     int a;
//     int b=~a;
//     scanf("%d",&a);
//     // scanf("%d",&b);
//     printf("%d",a~a);
//     return 0;
// }
int main() {
    int num, ones_complement;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Performing one's complement
    ones_complement = ~num;

    // Display results
    printf("Original Number: %d\n", num);
    printf("One's Complement: %d\n", ones_complement);

    return 0;
}