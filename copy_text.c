#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *targetFile;
    char ch;

    // Open the source file for reading
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Open the target file for writing
    targetFile = fopen("text_copy.txt", "w");
    if (targetFile == NULL) {
        perror("Error opening target file");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source to target
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
	fputc(ch,stdout);
    }

    // Close both files
    fclose(sourceFile);
    fclose(targetFile);

    printf("Contents copied to text_copy.txt\n");
    return 0;
}

