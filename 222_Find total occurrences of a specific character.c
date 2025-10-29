#include <stdio.h>
int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);   // You can use fgets(str, sizeof(str), stdin); in modern compilers

    printf("Enter character to count: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("Total occurrences of '%c' = %d\n", ch, count);
    return 0;
}
