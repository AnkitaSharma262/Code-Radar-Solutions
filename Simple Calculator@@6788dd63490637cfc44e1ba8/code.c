// Your code here...
#include<stdio.h>
int main(){
    float a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch (c){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        default:
            printf("Invalid");
    }
    return 0 ;
}
