#include <stdio.h>

int main() {
    int a, s, d, f, g, h, j, k, l;
    int arr_a[100], arr_s[100], arr_d[100], arr_f[100], arr_g[100], arr_h[100], arr_j[100], arr_k[100], arr_l[100];
    FILE *fptr;
    fptr = fopen("output.txt", "a");

    if (fptr == NULL) {
        printf("Error opening file.");
        return 1;
    }


    // Append values to arrays
    arr_a[0] = a;
    arr_s[0] = s;
    arr_d[0] = d;
    arr_f[0] = f;
    arr_g[0] = g;
    arr_h[0] = h;
    arr_j[0] = j;
    arr_k[0] = k;
    arr_l[0] = l;

    // Append values to file
    fprintf(fptr, "%d,%d,%d,%d,%d,%d,%d,%d,%d\n", arr_a[0], arr_s[0], arr_d[0], arr_f[0], arr_g[0], arr_h[0], arr_j[0], arr_k[0], arr_l[0]);
    fclose(fptr);
    return 0;
}
