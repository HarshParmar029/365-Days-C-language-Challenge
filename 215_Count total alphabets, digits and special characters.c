#include <stdio.h>
int main() {
    char str[100];
    int i;
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(str);   // take input string
    for(i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;   // count alphabets
        }
        else if(str[i] >= '0' && str[i] <= '9') {
            digits++;      // count digits
        }
        else if(str[i] != ' ') {
            special++;     // count special characters (ignore spaces)
        }
    }
    printf("Total Alphabets = %d\n", alphabets);
    printf("Total Digits = %d\n", digits);
    printf("Total Special Characters = %d\n", special);
    return 0;
}
