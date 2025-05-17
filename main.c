
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[100];
    char line[1000];
    int lineCount = 0;

    // Get filename from user
    printf("Enter the filename to create: ");
    scanf("%s", filename);

    // Create and open the file for writing
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    printf("Enter text (type 'EOF' on a new line to finish):\n");
    getchar(); // To consume the newline character left by scanf

    // Read input until user enters 'EOF' on a new line
    while (1) {
        fgets(line, sizeof(line), stdin);
        if (strcmp(line, "EOF\n") == 0)
            break;
        fputs(line, file);
    }

    fclose(file);

    // Open the file again for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Count the number of lines
    while (fgets(line, sizeof(line), file) != NULL) {
        lineCount++;
    }

    fclose(file);

    printf("Number of lines in the file '%s': %d\n", filename, lineCount);

    return 0;
}
