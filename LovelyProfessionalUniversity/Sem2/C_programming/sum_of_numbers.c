#include<stdio.h>

int main(){
    int a;
    int b;
    int sum;

    printf("Enter the first number here: ");
    scanf("%d",&a);
    printf("Enter the second number here: ");
    scanf("%d",&b);
    
    sum = a+b;
    printf("The sum is, %d",sum);
    return 0;
}