#include<stdio.h>

void sayHello();
void sayBye();

int main(){
    sayHello();
    sayBye();
    return 0;
}

void sayHello(){
    printf("Hello!\n");
}
void sayBye(){
    printf("BBye!\n");
}