#include <stdio.h>
#include <time.h>

double calculatePi(long long int numTerms) {
    double pi = 0.0;
    int sign = 1;
    long long int i;

    for (i = 0; i < numTerms; i++) {
        pi += sign / (2.0 * i + 1.0);
        sign *= -1;
    }

    pi *= 4.0;
    return pi;
}

int main() {
    long long int numTerms = 1000000000;  // Adjust the number of terms as needed

    clock_t start = clock();  // Record the starting time

    double pi = calculatePi(numTerms);

    clock_t end = clock();  // Record the ending time
    double elapsedSeconds = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Computed pi: %.15f\n", pi);
    printf("Time elapsed: %.3f seconds\n", elapsedSeconds);

    return 0;
}
