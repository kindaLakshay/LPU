#include<stdio.h>

//write a C code to check wether an interger input is greater than 10 or not or equal



int main(){
    int a;
    scanf("%d",&a);
    if(a>10){
        printf("the integer is greater than 10");
    }
    // elseif(a=10);{
    //     printf("the integer is equal to 10");
    // }
    // e
    else{
        printf("the integer is less than 10");
    }
    return 0;
}