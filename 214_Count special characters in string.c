#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    gets(str);   // take input string
    for(i = 0; str[i] != '\0'; i++) {
        if(!((str[i] >= 'a' && str[i] <= 'z') ||
             (str[i] >= 'A' && str[i] <= 'Z') ||
             (str[i] >= '0' && str[i] <= '9') ||
             str[i] == ' ')) {
            count++;   // count special characters
        }
    }
    printf("Total special characters = %d", count);
    return 0;
}
