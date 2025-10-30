#include <stdio.h>
int main() {
    char str[100], ch;
    int i, j = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);  // or use fgets(str, 100, stdin);

    // Input character to remove
    printf("Enter character to remove: ");
    scanf("%c", &ch);
    // Remove character
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ch) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0'; // End new string
    printf("String after removing '%c': %s", ch, str);
    return 0;
}
