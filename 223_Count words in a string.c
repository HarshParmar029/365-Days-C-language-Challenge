#include <stdio.h>
int main() {
    char str[200];
    int i, wordCount = 0;

    printf("Enter a string: ");
    gets(str);   // You can use fgets(str, sizeof(str), stdin); in modern compilers
    // Traverse the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check for word boundaries
        if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') &&
            (str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\t' && str[i + 1] != '\0')) {
            wordCount++;
        }
    }
    // If string is not empty, count first word
    if (str[0] != ' ' && str[0] != '\0')
        wordCount++;
    printf("Total number of words = %d\n", wordCount);
    return 0;
}
