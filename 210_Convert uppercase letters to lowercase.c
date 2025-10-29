#include <stdio.h>
int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    gets(str);   // take input string
    // convert uppercase to lowercase
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;   // convert to lowercase
        }
    }
    printf("String in lowercase: %s", str);
    return 0;
}
