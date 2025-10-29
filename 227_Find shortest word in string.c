#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50], shortest[50];
    int i = 0, j = 0, minLen = 999, len;

    printf("Enter a string: ");
    gets(str);   // Use fgets(str, sizeof(str), stdin); in modern compilers

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];  // build word
        } else {
            word[j] = '\0';  // end of current word

            if (j > 0) {  // to avoid counting empty spaces
                len = strlen(word);
                if (len < minLen) {
                    minLen = len;
                    strcpy(shortest, word);
                }
            }

            j = 0;  // reset for next word
        }

        if (str[i] == '\0')
            break;

        i++;
    }
    printf("Shortest word: %s\n", shortest);
    printf("Length: %d\n", minLen);
    return 0;
}
