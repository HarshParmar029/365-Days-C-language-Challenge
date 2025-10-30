#include <stdio.h>
int main() {
    char str[100];
    int i, j, k;

    // Input string
    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 100, stdin);
    // Remove duplicates
    for(i = 0; str[i] != '\0'; i++) {
        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                // Shift characters to the left
                for(k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
                j--; // Check again at same position
            }
        }
    }
    printf("String after removing duplicates: %s", str);
    return 0;
}
