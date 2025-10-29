#include <stdio.h>
int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    gets(str);   // You can use fgets(str, sizeof(str), stdin); in modern compilers

    printf("\nWords in the string are:\n");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            printf("\n");  // Move to next line on space
        } else {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}
