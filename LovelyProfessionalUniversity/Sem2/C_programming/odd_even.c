#include <stdio.h>

int main() {
    int M, N, count;
    
    printf("Enter the value of M: ");
    scanf("%d", &M);
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    count = 0;
    while (M <= N) {
        count++;
        M++;
    }
    printf("%d",count);
    
    return 0;
}
