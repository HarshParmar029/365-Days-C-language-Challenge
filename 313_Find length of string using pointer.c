#include <stdio.h>
int main() {
    char str[100];
    char *ptr;
    int length = 0;
    printf("Enter a string: ");
    gets(str);  // (For simplicity; safer option: fgets)

    ptr = str;  // pointer points to the first character of the string

    while (*ptr != '\0') {  // loop until null character
        length++;
        ptr++;  // move pointer to next character
    }
    printf("Length of the string = %d\n", length);
    return 0;
}
