#include <stdio.h>
int main() {
    char str[100], newStr[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);   // take input string
    // remove spaces
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '\t') {
            newStr[j] = str[i];
            j++;
        }
    }
    newStr[j] = '\0';  // end the new string

    printf("String after removing spaces: %s", newStr);
    return 0;
}
