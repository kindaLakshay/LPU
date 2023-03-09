#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char term[50], definition[200], subfield[50];
    FILE *fptr;
    fptr = fopen("medical_terms.txt", "r+");
    if(fptr == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    char list[1000][300];
    int count = 0, found = 0;
    printf("Enter term name to update definition: ");
    scanf("%s", term);
    while(fscanf(fptr, "%s %s %s", term, definition, subfield) != EOF) {
        sprintf(list[count], "%s %s %s", term, definition, subfield);
        count++;
        if(strcmp(term, term) == 0) {
            found = 1;
            break;
        }
    }
    if(found) {
        printf("Enter new definition: ");
        scanf("%s", definition);
        fseek(fptr, -strlen(list[count-1]), SEEK_CUR);
        fprintf(fptr, "%s %s %s\n", term, definition, subfield);
        printf("Definition updated successfully.\n");
    } else {
        printf("Term not found.\n");
    }
    fclose(fptr);
    return 0;
}
