#include <stdio.h>
int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    gets(str);   // take input string

    // replace spaces with underscores
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            str[i] = '_';
        }
    }
    printf("String after replacing spaces: %s", str);
    return 0;
}
