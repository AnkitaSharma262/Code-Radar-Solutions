#include <stdio.h>

int main() {
    char name[100];
    scanf("%s",&name);
    int age;
    scanf("%d",&age);
    char hobby[100];
    scanf("%s",&hobby);
    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);
    return 0;
}
// #include <stdio.h>

// int main() {
//     char name[100];
//     scanf("%s",& name);
//     int age;
//     scanf("%d",& age);
//     char hobby[100];
//     scanf("%s",& hobby);
//     printf("Name: %s\n",name);
//     printf("Age: %i\n",age);
//     printf("Hobby: %s\n",hobby);
//     return 0;
// }