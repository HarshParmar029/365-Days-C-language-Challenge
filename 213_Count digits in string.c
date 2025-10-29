#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);   // take input string
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            count++;   // count if character is a digit
        }
    }
    printf("Total digits = %d", count);
    return 0;
}
