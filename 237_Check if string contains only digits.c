#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int i, isDigitOnly = 1;

    // Input string
    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 100, stdin);
    // Check each character
    for(i = 0; str[i] != '\0'; i++) {
        if(!isdigit(str[i]) && str[i] != '\n') {
            isDigitOnly = 0;
            break;
        }
    }
    // Display result
    if(isDigitOnly)
        printf("String contains only digits.");
    else
        printf("String does not contain only digits.");
    return 0;
}
