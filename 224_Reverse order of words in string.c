#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int i, j, end, start;

    printf("Enter a string: ");
    gets(str);   // Use fgets(str, sizeof(str), stdin); in modern compilers

    end = strlen(str) - 1;

    // Remove trailing newline if present
    if (str[end] == '\n')
        str[end--] = '\0';

    printf("Reversed order of words:\n");
    for (i = end; i >= 0; i--) {
        // Find end of a word
        if (str[i] == ' ' || i == 0) {
            if (i == 0)
                start = 0;
            else
                start = i + 1;

            // Print the word
            for (j = start; j <= end; j++)
                printf("%c", str[j]);

            // Print a space
            if (i != 0)
                printf(" ");

            end = i - 1;  // Move end to previous word
        }
    }
    printf("\n");
    return 0;
}
