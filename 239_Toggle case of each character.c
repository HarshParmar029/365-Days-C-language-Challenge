/*
Loops through each character in the string.

If it’s lowercase (islower()), convert to uppercase (toupper()).

If it’s uppercase (isupper()), convert to lowercase (tolower()).

Non-alphabetic characters remain unchanged.
*/#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int i;

    // Input string
    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 100, stdin);
    // Toggle case
    for(i = 0; str[i] != '\0'; i++) {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        else if(isupper(str[i]))
            str[i] = tolower(str[i]);
    }
    // Display result
    printf("String after toggling case: %s", str);
    return 0;
}
