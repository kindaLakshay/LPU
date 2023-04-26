#include <stdio.h>

int main() {
    int a, s, d, f, g, h, j, k, l;
    FILE *fptr;
    fptr = fopen("output.txt", "a");

    if (fptr == NULL) {
        printf("Error opening file.");
        return 1;
    }

    fprintf(fptr, "%d , %d , %d , %d , %d , %d , %d , %d , %d\n", a, s, d, f, g, h, j, k, l);
    fclose(fptr);
    return 0;
}
