#include <stdio.h>
#include <string.h>
// Recursive function to reverse a string
void reverseString(char str[], int start, int end) {
    char temp;
    if(start >= end)
        return;

    // Swap characters
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call
    reverseString(str, start + 1, end - 1);
}
int main() {
    char str[100];
    // Input string
    printf("Enter a string: ");
    gets(str);  // Note: for safety, you can use fgets(str, 100, stdin)

    // Function call
    reverseString(str, 0, strlen(str) - 1);
    // Display reversed string
    printf("Reversed string: %s\n", str);
    return 0;
}
