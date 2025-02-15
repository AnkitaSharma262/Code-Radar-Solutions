// Your code here...
#include<stdio.h>
int main(){
    int h,b,p;
    scanf("%d %d %d",&h,&b,&p);
    if(h*h == b*b + p*p){
        printf("Valid");      
    }
    else{
        printf("Invalid");
    }
    return 0;
}