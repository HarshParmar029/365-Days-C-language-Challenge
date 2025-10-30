#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200];
    int i;
    int upper = 0, lower = 0, digit = 0, special = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 200, stdin);

    // Count characters
    for(i = 0; str[i] != '\0'; i++) {
        if(isupper(str[i]))
            upper++;
        else if(islower(str[i]))
            lower++;
        else if(isdigit(str[i]))
            digit++;
        else if(str[i] != '\n' && str[i] != ' ')
            special++;
    }
    // Display results
    printf("Uppercase letters : %d\n", upper);
    printf("Lowercase letters : %d\n", lower);
    printf("Digits            : %d\n", digit);
    printf("Special symbols   : %d\n", special);

    return 0;
}
