#include <stdio.h>

int main() {
    int number, i, fact = 1;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    for (i = 1; i <= number; i++) {
        fact *= i;
    }
    
    printf("Factorial of %d is: %d\n", number, fact);
    
    return 0;
}
