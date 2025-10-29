#include <stdio.h>
int main() {
    char str[100];
    int freq[256] = {0};  // frequency array for all ASCII characters
    int i;
    printf("Enter a string: ");
    gets(str);   // take input string
    // count frequency of each character
    for(i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;   // increment count for that character
    }
    printf("\nCharacter Frequency:\n");
    for(i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("%c = %d\n", i, freq[i]);
        }
    }
    return 0;
}
