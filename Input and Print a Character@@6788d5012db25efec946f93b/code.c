#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char string;
    printf("enter a single character :");
    scanf("%c",&string);
    printf("you enter :%c\n");
    return 0;
}