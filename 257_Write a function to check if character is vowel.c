#include <stdio.h>
// Function to check if a character is a vowel
int isVowel(char ch) {
    // Convert to lowercase to handle both cases
    if (ch >= 'A' && ch <= 'Z')
        ch = ch + 32;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1;   // Vowel
    else
        return 0;   // Not a vowel
}
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isVowel(ch))
        printf("%c is a vowel.", ch);
    else
        printf("%c is not a vowel.", ch);

    return 0;
}
