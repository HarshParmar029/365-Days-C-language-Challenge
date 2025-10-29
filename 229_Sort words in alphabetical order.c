#include <stdio.h>
#include <string.h>
int main() {
    char str[200], words[50][50], temp[50];
    int i = 0, j = 0, k = 0, n;

    printf("Enter a string: ");
    gets(str);   // You can use fgets(str, sizeof(str), stdin); in modern compilers
    // Split string into words
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            words[k][j] = '\0';  // end of word
            k++;
            j = 0;
        } else {
            words[k][j++] = str[i];
        }
    }
    words[k][j] = '\0';
    n = k + 1;  // total words
    // Sort words alphabetically using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(words[i], words[j]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
    printf("\nWords in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }
    return 0;
}
