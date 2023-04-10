#include <stdio.h>

int main() {
    FILE *p;
    p = fopen("test_file.md", "r");
    if (p == NULL) {
        printf("File doesn't exist.\n");
    } else {
        printf("The file exists.\n");
        int x = fclose(p);
        if (x == 0) {
            printf("File closed successfully.\n");
        } else {
            printf("Error closing file.\n");
        }
    }
    return 0;
}
