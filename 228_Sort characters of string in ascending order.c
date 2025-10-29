#include <stdio.h>
#include <string.h>
int main() {
    char str[100], temp;
    int i, j, len;

    printf("Enter a string: ");
    gets(str);   // You can use fgets(str, sizeof(str), stdin); in modern compilers

    len = strlen(str);
    // Bubble sort for characters
    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("String after sorting characters (A–Z): %s\n", str);
    return 0;
}
