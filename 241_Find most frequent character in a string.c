#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int freq[256] = {0};  // Frequency array for all ASCII characters
    int i, max = 0;
    char mostFrequent;

    // Input string
    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 200, stdin);
    // Count frequency of each character
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '\n')  // Ignore spaces/newline
            freq[(unsigned char)str[i]]++;
    }

    // Find character with maximum frequency
    for(i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            mostFrequent = (char)i;
        }
    }
    // Display result
    printf("Most frequent character: '%c'\n", mostFrequent);
    printf("Frequency: %d", max);
    return 0;
}
