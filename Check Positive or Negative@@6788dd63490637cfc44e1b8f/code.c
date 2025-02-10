#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a==0&&b==0)
    printf("Zero");
    else if (a>0||b>0)
    printf("Positive");
    else
    printf("Negative");
    return 0;
}