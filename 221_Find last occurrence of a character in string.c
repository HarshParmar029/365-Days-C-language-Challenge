#include <stdio.h>
int main() {
    char str[100], ch;
    int i, last = -1;

    printf("Enter a string: ");
    gets(str);   // Use fgets(str, sizeof(str), stdin); in modern compilers

    printf("Enter character to find: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            last = i; // update last position whenever found
        }
    }
    if (last != -1)
        printf("Last occurrence of '%c' is at position %d\n", ch, last + 1);
    else
        printf("Character '%c' not found in the string.\n", ch);
    return 0;
}
