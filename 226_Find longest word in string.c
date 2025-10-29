#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a string: ");
    gets(str);   // You can use fgets(str, sizeof(str), stdin); in modern compilers
    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];  // build the word
        } else {
            word[j] = '\0';  // end of word
            len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0;  // reset for next word
        }

        if (str[i] == '\0')
            break;

        i++;
    }
    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);
    return 0;
}
