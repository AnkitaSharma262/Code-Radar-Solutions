// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a%3==0 && a%5==0){
        printf("Divisible by both \n");
    }
     else if(a%3==0){
        printf("Divisible by 3 \n");
    }
    if(a%5==0){
        printf("Divisible by 5 \n");
    } else {
        printf("Not Divisible \n");
    }
    return 0;
}