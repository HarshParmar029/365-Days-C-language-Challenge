#include <stdio.h>
#include <string.h>
int main() {
    char str[100], sub[50];
    char *pos;

    printf("Enter main string: ");
    gets(str);
    printf("Enter substring to delete: ");
    gets(sub);
    pos = strstr(str, sub); // Find position of substring
    if (pos != NULL) {
        int len = strlen(sub);
        // Shift remaining characters to left
        strcpy(pos, pos + len);
        printf("String after deletion: %s", str);
    } else {
        printf("Substring not found!");
    }
    return 0;
}
