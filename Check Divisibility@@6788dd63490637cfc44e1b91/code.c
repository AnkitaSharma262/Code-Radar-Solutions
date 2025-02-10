#include <stdio.h>

int main() {
     int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a%5==0 && a%11==0)
    printf("Divisible");
    else
    printf("Not Divisible");
    return 0;
}