#include <stdio.h>
int main() {
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    gets(str);   // You can use fgets instead of gets in modern compilers

    printf("Enter character to find: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("'%c' found at position %d\n", ch, i + 1);
            found = 1;
            break; // Stop after first occurrence
        }
    }
    if (!found)
        printf("Character '%c' not found in the string.\n", ch);

    return 0;
}
