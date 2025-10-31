#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int len, total;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    // Formula for total substrings = n * (n + 1) / 2
    total = len * (len + 1) / 2;
    printf("Total substrings possible: %d", total);
    return 0;
}
