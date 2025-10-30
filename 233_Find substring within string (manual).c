#include <stdio.h>
int main() {
    char str[100], sub[50];
    int i, j, found;

    printf("Enter main string: ");
    gets(str);

    printf("Enter substring to find: ");
    gets(sub);
    for (i = 0; str[i] != '\0'; i++) {
        found = 1;
        for (j = 0; sub[j] != '\0'; j++) {
            if (str[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }
        // If found == 1, substring is matched
        if (found == 1) {
            printf("Substring found at position %d\n", i + 1);
            return 0;
        }
    }
    printf("Substring not found.\n");
    return 0;
}
