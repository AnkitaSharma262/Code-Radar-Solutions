// Your code here...
#include<stdio.h>
 int main(){
    char a;
    scanf("%c",&a);
    if(isupper(a)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
 }