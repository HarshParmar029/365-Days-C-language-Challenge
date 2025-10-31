#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    char words[50][50];
    int i, j, k, count = 0;

    printf("Enter a string: ");
    gets(str);
    // Split string into words
    char *token = strtok(str, " ");
    while (token != NULL) {
        strcpy(words[count++], token);
        token = strtok(NULL, " ");
    }
    // Remove repeated words
    for (i = 0; i < count; i++) {
        for (j = i + 1; j < count; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                // Shift words to left
                for (k = j; k < count - 1; k++) {
                    strcpy(words[k], words[k + 1]);
                }
                count--;
                j--;
            }
        }
    }
    printf("String after removing repeated words: ");
    for (i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }
    return 0;
}
