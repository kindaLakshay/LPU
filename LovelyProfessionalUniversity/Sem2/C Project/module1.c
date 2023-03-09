#include <stdio.h>
#include <stdlib.h>

int main() {
    char term[50], definition[200], subfield[50];
    FILE *fptr;
    fptr = fopen("medical_terms.txt", "a");
    if(fptr == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    printf("Enter term name: ");
    scanf("%s", term);
    printf("Enter term definition: ");
    scanf("%s", definition);
    printf("Enter term subfield: ");
    scanf("%s", subfield);
    fprintf(fptr, "%s %s %s\n", term, definition, subfield);
    fclose(fptr);
    printf("Record added successfully.\n");
    return 0;
}
