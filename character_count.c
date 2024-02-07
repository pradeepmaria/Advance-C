#include <stdio.h>

int main() {
    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;

    int currentChar, prevChar = ' ';

    while ((currentChar = getchar()) != EOF) {
        charCount++;

        if (currentChar == '\n') {
            lineCount++;
        }

        // Check for word boundary
        if (currentChar == ' ' || currentChar == '\t' || currentChar == '\n') {
            if (prevChar != ' ' && prevChar != '\t' && prevChar != '\n') {
                wordCount++;
            }
        }

        prevChar = currentChar;
    }

    // Check for a word at the end of the input
    if (prevChar != ' ' && prevChar != '\t' && prevChar != '\n') {
        wordCount++;
    }

    printf("Character count: %d\n", charCount);
    printf("Word count: %d\n", wordCount);
    printf("Line count: %d\n", lineCount);

    return 0;
}

