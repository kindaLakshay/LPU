#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    printf("\n*ptr:%u\n",*ptr);
    printf("\n$age:%d\n", &age);
    printf("\nptr: %d\n", ptr);
    return 0;
}