#include <stdio.h>
int main() {
    char str1[100], str2[100];   // source and destination strings
    char *p1, *p2;

    printf("Enter a string: ");
    gets(str1);  // (for simplicity; use fgets in safer programs)

    p1 = str1;   // pointer to source string
    p2 = str2;   // pointer to destination string
    // Copy characters one by one
    while (*p1 != '\0') {
        *p2 = *p1;  // copy character
        p1++;
        p2++;
    }
    *p2 = '\0';  // add null terminator
    printf("Copied string: %s\n", str2);
    return 0;
}
