#include <stdio.h>
#include <string.h>
// Recursive function to check palindrome
int isPalindrome(char str[], int start, int end) {
    // Base case: if one or zero characters left
    if (start >= end)
        return 1;

    // If mismatch found, not palindrome
    if (str[start] != str[end])
        return 0;

    // Recursive call for remaining substring
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    gets(str);  // (For safety, use fgets(str, 100, stdin) in real programs)

    // Remove newline if fgets used
    str[strcspn(str, "\n")] = '\0';

    // Check palindrome
    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("The string is a Palindrome.\n");
    else
        printf("The string is NOT a Palindrome.\n");

    return 0;
}
