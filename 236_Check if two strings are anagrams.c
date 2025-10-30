/*Counts how many times each character appears in both strings.

Ignores case (so Listen and Silent both become lowercase).

If frequencies match for all characters → they are anagrams.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int i;

    // Input two strings
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);
    // Convert both strings to lowercase and count frequency
    for(i = 0; str1[i] != '\0'; i++) {
        if(isalpha(str1[i]))
            freq1[tolower(str1[i])]++;
    }
    for(i = 0; str2[i] != '\0'; i++) {
        if(isalpha(str2[i]))
            freq2[tolower(str2[i])]++;
    }
    // Compare frequency arrays
    for(i = 0; i < 256; i++) {
        if(freq1[i] != freq2[i]) {
            printf("Strings are NOT anagrams.");
            return 0;
        }
    }
    printf("Strings are ANAGRAMS.");
    return 0;
}
