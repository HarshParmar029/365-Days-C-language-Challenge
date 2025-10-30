#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int i, isAlphaOnly = 1;

    // Input string
    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 100, stdin);
    // Check each character
    for(i = 0; str[i] != '\0'; i++) {
        if(!isalpha(str[i]) && str[i] != '\n') {
            isAlphaOnly = 0;
            break;
        }
    }
    // Display result
    if(isAlphaOnly)
        printf("String contains only alphabets.");
    else
        printf("String does not contain only alphabets.");
    return 0;
}
